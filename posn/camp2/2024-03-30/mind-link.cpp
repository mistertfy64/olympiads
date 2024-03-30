#include <bits/stdc++.h>
using namespace std;

int N;
int adj[305][305];

int solve(){
    int ans = -100000000;
    for (int i =0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            for (int k =0; k < N; k++){
                adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
            }
        }
    }
    for (int i =0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            ans = max(ans,adj[i][j]);
        }
    }
    return ans;    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j =0 ; j < N; j++){
            cin >> adj[i][j];
        }
    }
    cout << solve() << "\n";
    return 0;
}
