#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll memo[1000];
int ok[1000];

ll F(int N){
    if (ok[N]){
        return memo[N];
    }
    if (N == 0){
        return 0;
    }
    if (N==1){
        return 1;
    }
    ll result = F(N-1)+F(N-2);
    ok[N] = true;
    memo[N] = result;
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    cout << F(N) << "\n";
    return 0;
}