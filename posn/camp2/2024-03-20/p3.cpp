#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
typedef long long ll;

// NOT SOLVED!!!! - IT'S ONLY HERE FOR ARCHIVAL PURPOSES.


// ll distance = p[i] > target ? p[i]-target : c[i]-p[i]+target;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    ll target = INT_MAX, ans = INT_MAX;
    cin >> N;
    vector<ll> c(N), p(N);
    vector<pair<ll,int>> d(N);
    set<int> candidates;
    for (int i = 0 ; i < N; i++){
        cin >> c[i];
    }
    for (int i = 0 ; i < N; i++){
        cin >> p[i];
    }
    for (int i =0 ; i < N; i++){
        d[i] = make_pair(c[i]- p[i],i);
    }
    sort(d.rbegin(),d.rend());
    // take the highest values
    candidates.insert(d[0].second);
    for (int i = 1; i < N; i++){
        if (d[i].first<d[0].first){
            break;
        } else {
            candidates.insert(d[i].second);
        }
    }
    // process all candidate solutions
    for (int i : candidates){
        ll sans = 0;
        ll starget = p[i];
        //cerr << starget << "\n";
        for (int j = 0; j < N; j++){
            ll distance = p[j] >= starget ? p[j]-starget : p[j]+c[j]-starget;
            //cerr << "+" << distance << "\n";
            sans += distance;
        }   
        if (sans < ans || (sans == ans && starget < target)){
            target = starget;
            ans = sans; 
            //cerr << target << " " << ans << "\n";
        }
    }
    cout << target << " " << ans << "\n";
    return 0;
}