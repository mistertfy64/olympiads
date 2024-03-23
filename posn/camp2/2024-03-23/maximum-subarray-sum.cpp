#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()


int main(){
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    vector<int> prefixSum = {0};
    int k = 4, ans = -INT_MAX;
    for (int i =0 ;i < sz(arr);i++){
        prefixSum.push_back(prefixSum.back()+arr[i]);
    }
    if (sz(arr) < k){
        cout << "Invalid\n";
        return 0;
    }
    for (int i = 1; i <= sz(arr)-k;i++){
        ans = max(ans,prefixSum[i+k]-prefixSum[i]);
    }
    cout << ans << "\n";
    return 0;
}