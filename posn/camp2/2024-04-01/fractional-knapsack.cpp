#include <bits/stdc++.h>
using namespace std;

struct Item {
    double value, weight, ratio;
};

bool comp(Item i1, Item i2){
    return i1.ratio > i2.ratio;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int W, choices, ans = 0;
    cin >> W >>  choices;
    vector<Item> items(choices);
    for (int i =0 ; i < choices; i++){
        cin >> items[i].value >> items[i].weight;
        items[i].ratio = items[i].value / items[i].weight;
    }  
    sort(items.begin(),items.end(),comp);
    for (int i =0 ; i < choices&&W>0;i++){
        if (items[i].weight<=W){
            W-=items[i].weight;
            ans+=items[i].value;
        } else {
            ans += W / items[i].weight * items[i].value;
            W = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}