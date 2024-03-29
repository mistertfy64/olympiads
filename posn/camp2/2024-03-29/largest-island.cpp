#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

map<pii,set<pii>> adj;
set<pii> checked;

const int D4[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
const int D8[8][2] = {{1,1},{1,0},{1,-1},{0,1},{0,-1},{-1,1},{-1,0},{-1,-1}};
char cells[3005][3005];

int bfsc(pii src){
    set<pii> visited;
    deque<pii> toVisit;
    toVisit.push_back(src);
    visited.insert(src);
    while (!toVisit.empty()){
        pii current = toVisit.front();
        toVisit.pop_front();
        // add to all nodes
        for (pii x : adj[current]){
            if (visited.count(x)==0&&checked.count(x)==0){
                toVisit.push_back(x);
                visited.insert(x);
                checked.insert(x);
            }
        }
        // mark as visited and checked
    }
    return (int)visited.size();
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int R, C, ans = 0;
    cin >> R >> C;
    // take input
    for (int i =0 ; i < R; i++){
        for (int j =0 ; j < C; j++){
            cin >> cells[i][j];        
        }
    }
    // create adj. list
    for (int i =0 ; i < R; i++){
        for (int j =0; j < C; j++){
            // if the cell is a 0, connect to all other 0s in a 1 cell radius
            if (cells[i][j] == '0'){
                for (int k = 0; k < 4; k++){
                    if (cells[i+D4[k][0]][j+D4[k][1]] == '0'){
                        adj[make_pair(i+D4[k][0],j+D4[k][1])].insert(make_pair(i,j));
                        adj[make_pair(i,j)].insert(make_pair(i+D4[k][0],j+D4[k][1]));
                    }
                }
            }
        }  
    }
    // bfs on everything
    for (int i =0 ; i < R; i++){
        for (int j =0 ; j < C; j++){
            if (cells[i][j] == '0' && checked.count(make_pair(i,j))==0) {
                ans = max(ans, bfsc(make_pair(i,j)));                
            } 
        }
    }
    cout << ans << "\n";
    return 0;
}