#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define sz(x) (int)x.size()

void solve(int V, int E, vector<vector<pair<int,int>>> adj, int src){
    set<int> visited;
    vector<int> distances(V, INF);
    distances[src] = 0;
    int current = 0;
    // starting from 0...
    // get all nodes that are neighbors to 0
    while ((int)visited.size() < V){
        vector<pair<int,int>> neighbors;
    for (int i =0 ;i <sz(adj[current]);i++){
        cerr << "now: " << current << "\n";
        visited.insert(current);
        int toVisit = adj[current][i].first;
        cerr << "visiting: " << toVisit << "\n";
        // if already visited, skip
        if (visited.count(toVisit)>0){
            continue;
        }
        // add to neighbors
        neighbors.push_back(adj[current][i]);
        distances[toVisit] = min(distances[toVisit],distances[current]+adj[current][i].second);
    }    
        int next = 0, best = INF;
        for (int j =0; j < sz(neighbors);j++){
            if (best > distances[neighbors[j].first]){
                best = distances[neighbors[j].first];
                next = neighbors[j].first;
            }
        }
        current = next;
    for (int i =0 ; i < V; i++){
        cout << 0 << "->" << i << ": " << distances[i] << "\n";
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