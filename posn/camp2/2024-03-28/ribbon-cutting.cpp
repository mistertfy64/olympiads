#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

// adapted/taken from CMU 15-295 Fall 2023 Contest 4

// there is a ribbon that is N units long
// someone wants to cut it to smaller pieces that is either A units or B units or C units long
// what is the highest number of smaller ribbons that can be cut? (no remainder allowed)
// 1 < N, A, B, C < 4000

int A, B, C;
int memo[4002];
bool memoReady[4002];

int solve(int N){
    if (N < 0){
        return -INF;
    } 
    if (N==0){
        return 0;
    }
    if (memoReady[N]){
        return memo[N];
    }
    int result = max(solve(N-A),max(solve(N-B),solve(N-C)))+1;
    memo[N] = result;
    memoReady[N] = true;
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N >> A >> B >> C;
    cout << max(solve(N),0) << "\n";
    return 0;
}