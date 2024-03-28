#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll memo[1000005];


ll F(int N){
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 3;
    for (int i = 4 ;i <= N; i++){
        memo[i]=memo[i-2]+memo[i-1];
    }
    return memo[N];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    cout << F(N) << "\n";
    return 0;
}