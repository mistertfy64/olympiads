#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int x = 0;
    for (int i =0 ; i < 10; i++){
        if (i==1){
            x+=s[i]-'A'+1;
        } else {
            x+=s[i]-'0';
        }
    }
    int t = x;
    x %= 11;
    int target = (x <= 1) ? (1-x):(11-x);
    cout << (s[10]-'0' == target ? "T" : "F") << " " << t << "\n"; 
    return 0;
}