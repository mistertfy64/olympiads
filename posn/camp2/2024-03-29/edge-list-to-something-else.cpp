#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<vector<pair<int,int>>> adjList(1000);
    int adjMatrix[1000][1000];
    // assume graph goes both ways
    for (int i =0 ; i < N; i++){
        int S, D, W;
        cin >> S >> D >> W;
        // adj. list
        adjList[S].push_back(make_pair(D,W));
        adjList[D].push_back(make_pair(S,W));
        // adj. matrix
        adjMatrix[S][D] = W;
        adjMatrix[D][S] = W;
    }
    return 0;
}