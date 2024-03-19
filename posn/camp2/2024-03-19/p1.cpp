#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, ans = 0;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N)), A2(N, vector<int>(N));
    vector<vector<int>> X(N,vector<int>(N));
    for (int i =0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for (int i =0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            int total = 0;
            for (int k =0 ; k < N; k++){
                total += A[i][k] * A[k][j];
            }
            A2[i][j] = total;
        }
    }
    for (int i = 0; i < N; i++){
        for (int j =0 ; j < N; j++){
            X[i][j] = A2[i][j] + A[i][j];
        }
    }
    for (int i =0 ; i < N; i++){
        ans += X[i][i];
    }
    cout << ans << "\n";
    return 0;
}
