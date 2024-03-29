#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string o;
    int ans = 0;
    int current = INT_MAX;
    while (cin >> o){
        if (o == "x"){
            break;
        } else if (o == "i"){
            int x;
            cin >> x;
            if (current - x < 0.99){
                ans++;
            }
        } else if (o == "q") {
            cin >> current;
        }
    }
    cout << ans << "\n";
    return 0;
}