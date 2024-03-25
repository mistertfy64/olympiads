#include <bits/stdc++.h>
using namespace std;
#define high first
#define low second

// doesn't work for some test cases lol

pair<int, int> maxmin(vector<int> A,int l, int r,int N){
    cerr << l << " " << r << "\n";
    pair<int,int> result;
    if (N==2){
        if (A[l] > A[r]){
            return make_pair(A[l],A[r]); 
        }
        return make_pair(A[r],A[l]);
    }
    int m = (l+r)/2;
    pair<int,int> result1 = maxmin(A,l,m-1,N/2);
    pair<int,int> result2 = maxmin(A,m,r,N/2);
    result.first = max(result1.high,result2.high);
    result.second = min(result1.low,result2.low);
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    pair<int,int> result = maxmin(A,0,N-1, N);
    cout << "Lowest: " << result.second << "\n";
    cout << "Highest: " << result.first << "\n";
    return 0;
}
