#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
// to prevent confusion
#define weight first
#define connectedTo second

// cut as many routes as possible so that the cost is as low as possible while being able to visit all nodes


// adapted from https://www.geeksforgeeks.org/prims-algorithm-using-priority_queue-stl/
// since constraints are V, E < 10^6 and i dont know how to implement with priority queue
void prim(int V, vector<vector<pair<int,int>>> G){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    int src = 0;
    vector<int> distances(V, INT_MAX);
    vector<int> parents(V,-1);
    vector<bool> recorded(V,false);
    pq.push(make_pair(0,src));
    distances[src]=0;
    while (!pq.empty()){
        int u = pq.top().connectedTo;
        pq.pop();
        if (recorded[u]){
            continue;
        }
        recorded[u]=true;
        for (auto i = G[u].begin(); i != G[u].end(); i++){
            int v = (*i).connectedTo;
            int w = (*i).weight;
            if (!recorded[v]&&distances[v]>w){
                distances[v]=w;
                pq.push(make_pair(distances[v],v));
                parents[v] = u;
            }
        }
    }
    // format answer
    int ans = 0;
    vector<pair<int,int>> selected;
    for (int i =0 ; i < V; i++){
        selected.push_back(make_pair(min(parents[i],i),max(parents[i],i)));
        ans += distances[i];
    }
    sort(selected.begin(),selected.end());
    cout << ans << "\n";
    // get rid of bug by starting with i=1
    for (int i =1 ; i < V; i++){
        cout << selected[i].first << " " << selected[i].second << "\n";    
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int,int>>> G(V);
    for (int i =0 ; i < E; i++){
        int s,d,p;
        cin >> s >> d >> p;
        G[s].push_back(make_pair(p,d));
        G[d].push_back(make_pair(p,s));
    }
    prim(V,G);
    return 0;
}