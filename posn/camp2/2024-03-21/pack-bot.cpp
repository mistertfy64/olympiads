#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
typedef pair<char,int> pci;


struct Item {
    bool processed;
    pci content;
};

const int TAXES[4] = {2,4,8,16};

// assuming no nested square brackets because i couldn't bother lol

void printList(list<Item> order){
    for (auto it = order.begin(); it != order.end(); it++){
        if ((*it).processed){
            cerr << (*it).content.first << "(" << (*it).content.second <<  ")" << "->";
        } else {
            cerr << (*it).content.first << "->";
        }
    }
    cerr << "\n";
}

int process(list<Item> &order, int priority){
    cerr << "+++++++++++++++++++++++++++++++++++++++PROCESSING PRIORITY " << priority << "\n"; 
    int l = 0, r = sz(order), total = 0;
    int index = 0;
    int tax = TAXES[priority];
    // if (hasBracket){
    //     l++;
    //     r--;
    //     index++;
    // }
    // process priority X items
    auto sIt = order.begin();
    advance(sIt,l);
    auto eIt = order.begin();
    advance(eIt,r);
    for (auto it = sIt; it != order.end(); it++){
        cerr << "index = " << index << "\n";
        cerr << "list = ";
        printList(order);
        cerr << "current(1) = " << (*it).content.first;
        cerr << "\n";
        Item item = *it;
        if (!item.processed && item.content.first == '0'+priority){
            // process
            cerr << "erasing at " << index << "\n";
            auto it1 = order.begin();
            auto it2 = order.begin();
            advance(it1, index-1);
            advance(it2, index+1);
            int subtotal = 0;
            if ((*it1).processed == false){
                subtotal += 20;
            } else {
                subtotal += (*it1).content.second;
            }
            if ((*it2).processed == false){
                subtotal += 20;
            } else {
                subtotal += (*it2).content.second;
            }
            subtotal += subtotal * tax / 100;
            advance(it2,1);
            // set status
            // delete the 3, the letter to the left and right
            // and replace it with the price
            order.erase(it1,it2);
            Item item2;
            item2.processed = true;
            item2.content = make_pair('?',subtotal);
            auto it3 = order.begin();
            advance(it3,index-1);
            order.insert(it3,item2);
            total += subtotal;
            auto it4 = order.begin();
            advance(it4,index-1);
             cerr << "current(2) = " << (*it4).content.first;
             cerr << "\n";
            it = it4;
            index-=1;
        }       
        index++;
    }
    return total;
}


int main(){
    string s;
    while(cin >> s){
        int total = 0;
        list<Item> order;
        for (int i =0 ; i < sz(s); i++){
            Item item;
            item.processed = false;
            item.content = make_pair(s[i],0);
            order.push_back(item);
        }
        for (int i = 3; i > 0; i--){
            total = process(order,i);
            cerr << "Now: " << total << "\n";
        }
        cout << (*order.begin()).content.second << "\n";
        // check for square brackets
        // bool inBracket = false;
        // list<Item> orderInBracket;
        // vector<list<Item>> ordersInBrackets;
        // for (auto it = order.begin(); it != order.end(); it++){
        //     if (*it == '['){
        //         inBracket= true;
        //     } 
        //     if (inBracket){
        //         Item item;
        //         item.processed = false;
        //         item.content = make_pair(*it,0);
        //         orderInBracket.push_back(item);
        //     }
        //     if (*it == ']'){
        //         ordersInBrackets.push_back(orderInBracket);
        //         orderInBracket.clear();
        //         inBracket = false;
        //     }
        // }
        // // process orders in bracket
        // for (int i =0 ; i < sz(ordersInBrackets);i++){
        // }
    return 0;
    }
}