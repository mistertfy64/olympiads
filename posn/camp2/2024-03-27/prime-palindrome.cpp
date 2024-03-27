#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int N){
    string s = to_string(N);
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s == s2;
}

bool isPrime(int N){
    if (N == 2){
        return true;
    }
    if (N % 2 == 0){
        return false;
    }
    for (int i = 3; i * i <= N; i++){
        if (N%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    while (true){
        if (isPalindrome(N) && isPrime(N)){
            break;
        }
        N++;
    }
    cout << N << "\n";
    return 0;
}