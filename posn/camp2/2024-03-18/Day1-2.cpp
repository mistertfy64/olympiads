#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()


int main(){
    string s1, s2;
    vector<int> d1, d2;
    cin >> s1;
    cin >> s2;

    // process s1
    for (int i = 1; i < sz(s1);i++){
        d1.push_back((int)(s1[i]-s1[i-1]));
    }
    // process s2
    for (int i = 1; i < sz(s2);i++){
        d2.push_back((int)(s2[i]-s2[i-1]));
    }

    // print result
    if (sz(d1) != sz(d2)){
        cout << "different length\n";
    } else if (d1 == d2){
        cout << "similarity\n";
        for (int d : d1){
            cout << d << " ";
        }
        cout << "\n";
    } else {
        cout << "difference\n";
        for (int d : d1){
            cout << d << " ";
        }
        cout << "\n";
        for (int d : d2){
            cout << d << " ";
        }
        cout << "\n";
    }
    return 0;
}