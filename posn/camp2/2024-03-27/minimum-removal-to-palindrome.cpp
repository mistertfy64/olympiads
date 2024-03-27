#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char,int> freq;
    for (int i = 0; i < sz(s); i++){
        freq[s[i]]++;
    }
    // cases of a permutation that can be a palindrome:
    // 1. all except one even, remaining odd
    // 2. all are even
    int odds = 0;
    for (auto x : freq){
        if (x.second%2==1){
            odds++;
        }
    }
    if (odds > 1){
        cout << odds-1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    return 0;
}