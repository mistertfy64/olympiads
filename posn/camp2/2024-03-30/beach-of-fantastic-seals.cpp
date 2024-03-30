#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define sz(x) (int)x.size()
// shortest path from v0 to v1000, or unreachable?
// every path is 1km long

vector<vector<int>> adj(1002);

int solve(int src, int dest, int V){
        set<int> visited;
    vector<int> distances(1002,INF);
    distances[src] = 0;
    int current = 0;
    // starting from 0...
    // get all nodes that are neighbors to 0
    // bfs, but im too lazy
    return 1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> verticies;
    int E;
    cin >> E;
    for (int i =0 ; i < E; i++){
        int s, d;
        cin >> s >> d;
        adj[s].push_back(d);
        adj[d].push_back(s);
        verticies.insert(d);
        verticies.insert(s);
    }
    cout << solve(0,1000,(int)verticies.size()) << "\n";
    return 0;
}