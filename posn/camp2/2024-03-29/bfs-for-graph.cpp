#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

bool bfs(vector<vector<int>> adj, int src, int dest, set<int> visited){
    deque<int> toSearch;
    toSearch.push_back(src);

    while (!toSearch.empty()){
        int current = toSearch.front();
        toSearch.pop_front();
        if (current == dest){
            return true;
        }
        for (int i = 0; i < sz(adj[current]); i++ ){
            int now = adj[current][i];
            if (visited.count(now)==0){
                toSearch.push_back(now);
                visited.insert(now);
            }
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, src, dest;
    cin >> N >> src >> dest;
    vector<pair<int,int>> edges;
    vector<vector<int>> adj(1000);
    // take input
    for (int i =0 ; i < N; i++){
        int A, B;
        cin >> A >> B;
        edges.push_back(make_pair(A,B));
    }
    // convert to adj list
    for (int i = 0; i < N; i++){
        int S = edges[i].first;
        int D = edges[i].second;
        adj[S].push_back(D);
        adj[D].push_back(S);
    }
    set<int> visited;
    cout << (bfs(adj,src,dest,visited) ? "Found" : "Not Found") << "\n";
    return 0;
}