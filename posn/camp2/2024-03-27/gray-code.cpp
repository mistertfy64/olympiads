#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    for (int i =0 ; i < N; i++){
        cout << (i^(i>>1)) << "\n";
    }
    return 0;
}
