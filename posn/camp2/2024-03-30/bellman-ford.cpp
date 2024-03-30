// INCOMPLETE!!!


#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define sz(x) (int)x.size()



void solve(int V, int E, vector<vector<pair<int,int>>> adj, int src){
    vector<int> distances(V,INF);
    distances[src] = 0;

    for (int i =0 ; i < V; i++){
        for (int j = 0; j < sz(adj[i]); j++){
            int u = j;
            int v = adj[i][j].first;
            int w = adj[i][j].second;
            int temp = distances[u] + w;
            if (temp < distances[u]){

            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     int V, E;
    cin >> V >> E;
    vector<vector<pair<int,int>>> adj(V);
    for (int i =0 ; i < E; i++){
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(a,w));
    }
    solve(V,E,adj,0);
    return 0;
}