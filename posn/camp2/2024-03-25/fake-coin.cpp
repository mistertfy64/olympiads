#include <bits/stdc++.h>
using namespace std;

// one value is smaller than the others (which are the same)
// find the index

// divide and conquer implementation
int solve(int l, int r, vector<int> arr){
    int sz = r-l+1;
    if (sz==1){
        return l;
    }
    cerr << l << " " << r << " " << sz << " -> ";
    if (sz%2==0){
        int mid = (l + r)/2;
        int lSum = 0, rSum = 0;
        for (int i = l; i <= mid; i++){
            lSum += arr[i];
        }
        for (int i = mid+1; i <= r; i++){
            rSum += arr[i];
        }
        cerr << lSum << " " << rSum << "\n";
        if (lSum < rSum){
            // its in l
            return solve(l,mid,arr);
        } else {
            // its in r
            return solve(mid+1,r,arr);
        }
    } else {
        // take first coin out
        int mid = (l + 1 + r)/2;
        int lSum = 0, rSum = 0;
        for (int i = l+1; i <= mid; i++){
            lSum += arr[i];
        }
        for (int i = mid+1; i <= r; i++){
            rSum += arr[i];
        }
        cerr << lSum << " " << rSum << " " << arr[l] <<"\n";
        if (lSum == rSum){
            return l;
        } else if (lSum < rSum){
            // its in l
            return solve(l,mid,arr);
        } else {
            // its in r
            return solve(mid+1,r,arr);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int size = 24;
    vector<int> arr = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2};
    cout << solve(0,size-1,arr) << "\n";
    return 0;
}