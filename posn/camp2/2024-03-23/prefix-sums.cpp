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
    for (int i = 1; i <= N; i++){
        cout << prefixSum[i] << " "; 
    }
    cout << "\n";
    return 0;
}