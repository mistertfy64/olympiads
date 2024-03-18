#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> freq;
    char c;
    string s;
    vector<string> targets = {"00","01","10","11"};
    while (cin >> c){
        if (c != '0' && c != '1'){
            break;
        }
        s += c;
    }
    for (int i = 1; i < (int)s.size(); i++){
        string t;
        t+=s[i-1];
        t+=s[i];
        freq[t]++;
    }
    for (string element : targets){
        cout << freq[element] << "\n";
    }
    return 0;
}
