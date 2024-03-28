#include <bits/stdc++.h>
using namespace std;

int bestFor[100000] = {0};
int prices[11] = {0,1,5,8,9,10,17,17,20,24,30};

int solve(int N){
    bestFor[0] = 0;
    bestFor[1] = 1;
    for (int i = 2; i <= N; i++){
        int current = prices[i];
        for (int j = 1; j < i; j++){
            current = max(bestFor[i-j]+bestFor[j],current);
        }
        bestFor[i] = current;
    }
    return bestFor[N]; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    cout << solve(N) << "\n";
    return 0;
}