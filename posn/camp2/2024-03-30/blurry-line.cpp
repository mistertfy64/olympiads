#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

map<string,map<string,int>> adj; 

// you must go from node X and Y in a graph
// you start with p power at position X
// if you go through a good line, you get +1 power
// if you go through a bad line, you get -1 power
// you can't go back
// can you reach Y with at least c power? 

bool solve(int c, int p){
    map<string,int> distances;
    for (auto x : adj){
        distances[x.first] = INF;
    }
    distances["X"] = 0;
    for (auto x : adj){
        for (auto e : adj[x.first]){
            int now = distances[e.first] + adj[x.first][e.first];
            distances[x.first] = min(distances[x.first],now);
        }
    }
    return distances["Y"] <= p-c;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, c, p;
    cin >> N >> L >> c >> p;
    // the good lines +1
    for (int i =0 ; i < N; i++){
        string s, d;
        cin >> s >> d;
        adj[s][d]=-1;
    }
    // the bad lines -1
    for (int i =0  ; i < L; i++){
        string s, d;
        cin >> s >> d;
        adj[s][d]=1;
    }
    cout << (solve(c,p) ? "Y" : "N") << "\n";
    return 0;
}