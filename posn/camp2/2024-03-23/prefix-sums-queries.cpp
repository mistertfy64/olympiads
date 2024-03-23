#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> prefixSum = {0};
    for (int i =0 ; i < N; i++){
        int x;
        cin >> x;
        prefixSum.push_back(prefixSum.back()+x);
    }
    int Q;
    cin >> Q;
    while (Q--){
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l-1] << "\n";
    }
    return 0;
}