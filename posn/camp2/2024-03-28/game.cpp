#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) (int)x.size()
#define INF 9000000000000000000LL

// There are N cells. Each cell has a number (1 < A < 10^9) inside it.
// Player will
// 1. Place a chip into any cell
// 2. Get the number in the cell's points
// 3. Move the number in the cell's cells to the right
// 4. Repeat 2 and 3 until player is no longer in cells
// Maximum score possible?


ll solve(vector<ll> A,vector<ll>dp){
    ll ans = -INF;
    for (int i = sz(A)-1; i >=0; i--){
        int currentPos = i;
        ll currentScore = 0;
        while (currentPos < sz(A)){
            if (dp[currentPos] != -INF){
                currentScore += dp[currentPos]; 
                break;
            }
            currentScore += A[i];
            currentPos += A[i];
        }
        dp[i] = max(dp[i],currentScore);
        ans = max(currentScore,ans);
    }
    // for (int i = 0 ; i < sz(A); i++){
    //     cerr << dp[i] << " ";
    // }
    // cerr << "\n";
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        vector<ll> A, dp;
        for (int i =0 ; i < N; i++){
            ll x;
            cin >> x;
            A.push_back(x);
            dp.push_back(-INF);
        }
        cout << solve(A,dp) << "\n";
    }
    return 0;
}