#include <bits/stdc++.h>
using namespace std;

int F(int N){
    if (N == 0){
        return 0;
    }
    if (N==1){
        return 1;
    }
    return F(N-1)+F(N-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    cout << F(N) << "\n";
    return 0;
}