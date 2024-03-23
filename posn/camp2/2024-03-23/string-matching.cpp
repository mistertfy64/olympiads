#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

bool comp(pair<char,int> a, pair<char,int> b){
    if (a.second==b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    map<char,int> freq;
    vector<pair<char,int>> ans;
    string s;
    cin >> s;
    for (int i =0 ;i < sz(s);i++){
        if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm')){
            continue;
        }
        freq[s[i]]++;
    }
    for (auto &x : freq){
        ans.push_back(make_pair(x.first,x.second));
    }
    sort(ans.begin(),ans.end(),comp);
    for (auto p : ans) {
        cout << p.first << " -> " << p.second << "\n";
    }
    return 0;
}