#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        if (x % 2 == 0){
            ans += x;
        }
    }
    cout << ans << "\n";
    return 0;
}