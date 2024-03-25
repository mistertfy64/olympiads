#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

// Find the longest substring in S that has no repeating letters.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string best;
    cin >> s;
    for (int i =0 ;i < sz(s); i++){
        set<char> appeared;
        string current = "";
        for (int j = i; j < sz(s); j++){
            if (appeared.count(s[j])>0){
                break;
            } else {
                current += s[j];
                if (sz(current) > sz(best)){
                    best = current;
                }
                appeared.insert(s[j]);
            }
        }
    }
    cout << best << "\n";
    return 0;
}