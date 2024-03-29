#include <bits/stdc++.h>
using namespace std;

vector<set<int>> adj(1000000);

bool dfs(int s, int d){
    set<int> visited;
    stack<int> toSearch;
    toSearch.push(s);
    while (!toSearch.empty()){
        int c = toSearch.top();
        toSearch.pop();
        if (c == d) {
            return true;
        }
        for (int i : adj[c]){
            if (visited.count(i)==0){
                toSearch.push(i);
                visited.insert(i);
            }
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, ans = 0;
    cin >> N;
    for (int i =0 ; i < N; i++){
        int s, d;
        cin >> s >> d;
        if (!dfs(s,d)) ans++;
        adj[s].insert(d);
        adj[d].insert(s);
    }
    cout << ans << "\n";
    return 0;
}