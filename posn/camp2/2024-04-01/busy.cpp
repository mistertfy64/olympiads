#include <bits/stdc++.h>
using namespace std;
#define INF 1e9+7

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, ans = 0, last;
    cin >> N;
    vector<pair<int,int>> movies(N);
    vector<int> firsts;
    vector<pair<int,int>> selected;
    for (int i = 0; i < N; i++){
        cin >> movies[i].first >> movies[i].second;
        last = max(last,max(movies[i].second,movies[i].first));
    }
    sort(movies.begin(),movies.end());
    for (int i =0 ; i < N; i++){
        firsts.push_back(movies[i].first);
    }
    // select movies[0]
    int t = movies[0].second;
    ans++;
    selected.push_back(make_pair(movies[0].first,movies[0].second));
    while (t<last){
        // keep selecting lowest t
        // if tied, select shortest one
        int next = lower_bound(firsts.begin(),firsts.end(),t)-firsts.begin();       
        if (next == N){
            break;            
        }
        t = movies[next].second;
        ans++;
        selected.push_back(movies[next]);
    }
    cout << ans << "\n";    
    for (int i =0; i < (int)selected.size(); i++){
        cout << selected[i].first << " " << selected[i].second << "\n";
    }
    return 0;
}
