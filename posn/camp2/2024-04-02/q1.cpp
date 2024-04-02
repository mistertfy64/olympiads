#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<double> pay(n+1);
    vector<vector<int>> descendants(n+1);
    // construct tree
    for (int i = 1; i <= n; i++){
        if (i*2<=n){
            descendants[i].push_back(i*2);
        }   
        if (i*2+1<=n){
            descendants[i].push_back(i*2+1);
        }
    }
    while (m--){
        int x;
        double y;
        cin >> x >> y;
        // give money according to descendant tree
        // bfs down
        map<int,double> toGive;
        queue<int> remaining;
        remaining.push(x);
        toGive[x] = y;
        while (!remaining.empty()){
            // get # of descendants
            int current = remaining.front();
            //cerr << current << "\n";
            remaining.pop();
            int d = sz(descendants[current]);
            if (d==0){
                // do nothing to the money lol
            }
            else if (d==1){
                // half for current, half to descendant
                int p = toGive[current] / 2.0;
                toGive[current] -= p;
                toGive[descendants[current][0]]+=p;
                remaining.push(descendants[current][0]);
            }
            else if (d==2){
                int p = toGive[current] / 2.0;
                toGive[current] -= p;
                toGive[descendants[current][0]]+=p/2.0;
                toGive[descendants[current][1]]+=p/2.0;
                remaining.push(descendants[current][0]);
                remaining.push(descendants[current][1]);
            }
        }
        // give out money
        for (auto e : toGive){
            pay[e.first] += e.second;
            //cerr << e.first << ": +" << e.second << "\n";
        }
    }
    for (int i =1 ; i <= n; i++){
        cout << fixed << setprecision(2) << pay[i] << "\n";
    }
    return 0;
}