#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define sz(x) (int)x.size()

int adjMatrix[100][100];


void printResults(int V){
    for (int i =0 ; i < V; i++){
        for (int j =0 ; j < V; j++){
             cout << i << "->" << j << ": " << adjMatrix[i][j] << "\n";
        }
    }
}

void solve(int V, int E, vector<vector<pair<int,int>>> adj){
    for (int i =0 ; i < V; i++){
        for (int j =0; j < V; j++){
            for (int k = 0; k < V; k++){
                adjMatrix[i][j] = min(adjMatrix[i][j],adjMatrix[i][k]+adjMatrix[k][j]);
            }
        }
    }
    printResults(V);
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
    // init matrix
    for (int i =0 ; i < 100; i++){
        for (int j =0 ; j < 100; j++){
            adjMatrix[i][j] = INF;
        }
    }
    // convert to matrix
    for (int i =0 ;i < sz(adj); i++){
        for (int j =0 ; j < sz(adj[i]); j++){
            adjMatrix[i][adj[i][j].first] = adj[i][j].second;
        }
    }
    solve(V,E,adj);
    return 0;
}