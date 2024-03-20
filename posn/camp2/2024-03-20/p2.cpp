#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    vector<int> t(n), h(n), total(n);
    for (int i=0; i < n; i++){
        cin >> t[i];
    }
    for (int i=0; i < n; i++){
        cin >> h[i];
    }
    sort(t.begin(),t.end());
    sort(h.begin(),h.end());
    for (int i =0; i < n; i++){
        total[i] = t[i]+h[n-i-1];
    }
    sort(total.begin(),total.end());
    for (int i =1; i < n; i++){
        ans += abs(total[i]-total[i-1]);
    }
    cout << ans << "\n";
    return 0;
}