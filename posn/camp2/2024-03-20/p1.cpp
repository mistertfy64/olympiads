#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, C, K;
    cin >> N >> C;
    cin >> K;
    map<int,int> votes;
    map<string,int> freq;
    while (N--){
        bool ok = true;
        string phone;
        int vote;
        cin >> phone >> vote;
        // check eligiblity
        if (freq[phone]>=K){
            // discard vote
            ok=false;
        }
        // check valid vote
        if (vote <= 0 || vote > C){
            // discard vote;
            ok=false;
        }
        // check valid phone number
        // too lazy to implement
        if (false){
            ok=false;
        }
        // check if vote is ok
        if (ok){
            votes[vote]++;
        }
        // add phone number to register
        freq[phone]++;
    }
    for (int i = 1; i <= C; i++){
        cout << votes[i] << "\n";
    }
    return 0;
}