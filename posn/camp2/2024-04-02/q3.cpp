#include <bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int,int> tiiii;
#define sz(x) (int)x.size()
// index = src
// first = adj. to (dest)
// second = distance
// third = covered
// fourth = cost
vector<vector<tiiii>> adj(3005);
vector<tiiii> inputs;

// first = distance
// second = cost
vector<pair<int,int>> packages;

// TOI15 budget

void dbg(tiiii t){
    //cerr << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << "\n";
}

int prim(vector<vector<tiiii>> graph, int B){
    int total = 0;
    set<int> full;
    // init full list
    for (int i =0 ; i < B; i++){
        full.insert(i);
    }
    set<pair<int,int>> selected;
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
        bool ok = true;
        pair<int,int> bestNodes;
        pair<int,int> bestPair1;
        pair<int,int> bestPair2, bestPair3;  
        for (int i = 0; i < B; i++){
            // is i already connected?
                for (int k = 0; k < sz(graph[i]); k++){
                int j = get<0>(graph[i][k]);
                // ng check
                // ...unless roof is already covered
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
                // dont bother if roof already placed
                if (get<2>(graph[i][k]) == 1) {
                    best = 0;
                    //cerr << "best = "<< best << "\n";
                    bestPair1 = make_pair(i,get<0>(graph[i][k]) );
                    bestPair2 = make_pair(get<0>(graph[i][k]),i);
                    bestPair3 = make_pair(i,k);
                    bestNodes = make_pair(i,j);
                    continue;

                }
                if (get<3>(graph[i][k]) < best){
                    best = get<3>(graph[i][k]);
                    //cerr << "best = "<< best << "\n";
                    bestPair1 = make_pair(i,get<0>(graph[i][k]) );
                    bestPair2 = make_pair(get<0>(graph[i][k]),i);
                    bestPair3 = make_pair(i,k);
                    bestNodes = make_pair(i,j);
                }                
                //cerr << i << "->" << j << " " << get<3>(graph[i][k]) << " " << (get<2>(graph[i][k]) == 1 ? "+R" : "") << "\n";
                dbg(graph[i][k]);
            }
        }
        //cerr << "BEST: " << bestNodes.first << " " << bestNodes.second << "\n";
    if (get<2>(graph[bestPair3.first][bestPair3.second])==0){
        //cerr << "+" << best << "\n"; 
        total += best;
    } else {
        //cerr << "SKIPPED\n";
    }
        // add to selected
        selected.insert(make_pair(bestNodes.first,bestNodes.second));
        selected.insert(make_pair(bestNodes.second,bestNodes.first));        
        // add to visited
        //cerr << "added " << bestNodes.second << "\n"; 
        visited.insert(bestNodes.second);
        // mark as covered
        get<2>(graph[bestPair1.first][bestPair1.second]) = 1;
        get<2>(graph[bestPair2.first][bestPair2.second]) = 1;
        //cerr << "remaining: " << (int)visited.size() << "/" << (int)full.size() << "\n";
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int B, E, P;
    cin >> B >> E;
    for (int i =0 ; i < E; i++){
        int S, T, L, R;
        cin >> S >> T >> L >> R;
        inputs.push_back(make_tuple(S,T,L,R));
        inputs.push_back(make_tuple(T,S,L,R));
    }
    cin >> P;
    for (int i =0 ; i < P; i++){
        int C, D;
        cin >> C >> D;
        packages.push_back(make_pair(C,D));
    }
    // convert pairs into arrays
    sort(packages.begin(),packages.end());
    // find prices
    vector<int> packageDistances;
    vector<int> packagePrices;
    for (int i = 0 ; i < sz(packages);i++){
        packageDistances.push_back(packages[i].first);
        packagePrices.push_back(packages[i].second);
    }
    // set prices
    // modify cost later
    for (int i =0 ; i < sz(inputs);i++){
        int S = get<0>(inputs[i]);
        int T = get<1>(inputs[i]);
        int L = get<2>(inputs[i]);
        int R = get<3>(inputs[i]);
        int index = (lower_bound(packageDistances.begin(),packageDistances.end(),L))-(packageDistances.begin());
        int cost = *min_element(packagePrices.begin()+index,packagePrices.end());
        adj[S].push_back(make_tuple(T,L,R,cost));
        adj[T].push_back(make_tuple(S,L,R,cost));
    }
    cout << prim(adj,B) << "\n";
    return 0;
}