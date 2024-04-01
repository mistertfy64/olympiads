#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
#define sz(x) (int)x.size()

// sample data from
// https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
int graph[SIZE][SIZE] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };

void print(vector<vector<pair<int,int>>> tree){
    for (int i = 0; i < sz(tree); i++){
        for (int j =0 ; j < sz(tree[i]); j++){
            cerr << i << " <-> " << tree[i][j].first << ": " << tree[i][j].second << "\n";
        }
    }
}


vector<vector<pair<int,int>>> prim(){

    set<int> full;
    // init full list
    for (int i =0 ; i < 5; i++){
        full.insert(i);
    }
    set<pair<int,int>> selected;
    vector<vector<pair<int,int>>> tree(SIZE);
    set<int> visited;
    visited.insert(0);
    while (visited != full){
        // create candidate sets
        set<int> srcCandidates = visited;
        set<int> destCandidates;
        set_difference( 
        full.begin(), full.end(), visited.begin(), visited.end(), 
        inserter(destCandidates, destCandidates.begin()));
        // select lowest cost nodes (also with other conditions)
        int best = INT_MAX;
        pair<int,int> bestPair;       
        for (int i = 0; i < SIZE; i++){
            for (int j = 0; j < SIZE; j++){
                // ng check
                if (i==j){
                    continue;
                }
                if (srcCandidates.count(i)==0||destCandidates.count(j)==0){
                    continue;
                }
                // already selected?
                if (selected.count(make_pair(i,j))){
                    continue;
                }
                // is not connected? (is a 0)?
                if (graph[i][j] == 0){
                    continue;
                }
                // consider it
                if (graph[i][j] < best){
                    best = graph[i][j];
                    bestPair = make_pair(i,j);
                }
            }
        }
        // add to tree
        tree[bestPair.first].push_back(make_pair(bestPair.second,best));
        tree[bestPair.second].push_back(make_pair(bestPair.first,best));
        // add to selected
        selected.insert(make_pair(bestPair.first,bestPair.second));
        selected.insert(make_pair(bestPair.second,bestPair.first));        
        // add to visited
        visited.insert(bestPair.second);
    }
    return tree;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    print(prim());
    return 0;
}