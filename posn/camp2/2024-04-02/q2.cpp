#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()
// from leetcode 122

int solve(vector<int> prices){
    vector<int>sc;
    int bc, ans = 0;
    // start bc and sc at end
    // bc only contains 1 number (the current date)
    // sc contains all the possible sell dates
    int day = sz(prices)-1;
    while (day >= 0){ // O(N)
        // set buy value
        bc = prices[day];
        // push back a sell candidate
        sc.push_back(prices[day]);
        int profit = 0;
        bool ok = false;
        // go through all possible
        for (int i =0 ; i < sz(sc); i++){
            if (sc[i]-bc>profit){
                ok = true;
                profit = sc[i]-bc;
            }
        }
        // add profit
        ans += profit;
        if (ok){
            sc.clear();
            sc.push_back(prices[day]);
        }   
        day--;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i =0 ; i < N; i++){
        cin >> P[i];
    }
    cout << solve(P) << "\n";
    return 0;
}