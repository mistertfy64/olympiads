#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K;
    cin >> N >> K;
    vector<int> A;
    for (int i = 1; i <= N; i++){
        A.push_back(i);
    }
    K--;
    while (K--&&next_permutation(A.begin(),A.end())){}
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << "\n";   
    return 0;
}