#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define weight first
#define connectedTo second
typedef pair<int,int> pii;

vector<vector<pair<int,int>>> adj(2000006);
vector<int> cameFrom(2000006, -1);

void printPath(int src){
    vector<int> soFar;
    soFar.push_back(src);
    while (cameFrom[soFar[(int)soFar.size()-1]]!=-1){
        soFar.push_back(cameFrom[soFar[(int)soFar.size()-1]]);
    }
    // print path
    for (int i = (int)soFar.size()-1;i>=0;i--){
        cout << soFar[i] << " ";
    }
    cout << "\n";
}

void solve(int n, int maxV){
    // dijkstra
    vector<int> distances(maxV,INF);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push(make_pair(0,n));
    distances[n] = 0;
    while (!pq.empty()){
        int u = pq.top().connectedTo;
        pq.pop();
        for (auto x : adj[u]){
            int v = x.connectedTo;
            int w = x.weight;
            if (distances[v] > distances[u] + w){
                distances[v] = distances[u] + w;
                pq.push(make_pair(distances[v],v));
                cameFrom[v] = u;
            }
        }
    }
    for (int i = 0;i < maxV; i++){
        if (i==n){
            continue;
        }
        printPath(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int E, n, maxV = 0;
    cin >> E;
    cin >> n;
    for (int i =0 ; i < E; i++){
        int s, d, p;
        cin >> s >> d >> p;
        adj[s].push_back(make_pair(p,d));
        adj[d].push_back(make_pair(p,s));
        maxV = max(maxV,max(s,d));
    }
    solve(n, maxV+1);
    return 0;
}