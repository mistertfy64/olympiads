#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N,vector<int>(N));
    for (int i =0 ; i < N; i++){
        for (int j = 0 ; j < N; j++){
            cin >> A[i][j];
        }
    }

    for (int i =0 ; i < N; i++){
        for (int j = 0 ; j < N; j++){
            cout << A[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}