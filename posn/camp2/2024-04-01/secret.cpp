#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

class Node {
    public: 
        pair<int,string> data;
        Node* left;
        Node* right;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string ns;
    int K;
    getline(cin,s);
    cin >> K;
    // step 1. caesar cipher
    // adapted from https://stackoverflow.com/a/313990 because i
    // couldnt bother to check if the char is upper or lower
    transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return tolower(c); });
    for (int i =0 ; i < sz(s); i++){
        if (s[i] == 32){
            ns += " ";
        } else {
            // a = 97
            // z = 122
            if (s[i]+K>122){
                // wrap around
                ns += s[i]-(26-K);
            } else {
                ns += s[i]+K;
            }
        }
    }
    cout << ns << "\n";
    // step 2. huffman coding
    vector<string,int> freq;
    for (int i =0 ;i < sz(s); i++){
        freq[s[i]]++;
    }
    priority_queue<pair<int,string>,vector<pair<int,string>,greater<pair<int,string>>>>pq;
    for (auto x : freq){
        freq.push_back(make_pair(x.second,x.first));
    } 
    while (!pq.empty()){
        Node *node = new Node();
        pair<int,string> next = pq.top();
        node->left->data.first = next.first;
        node->left->data.second = next.second;
        // UNFINISHED LOL
    }
    return 0;
}