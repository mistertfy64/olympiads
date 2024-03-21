#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()


int main(){
    string s;
    while(cin >> s){
        int total = 0;
        list<char> order;
        for (int i =0 ; i < sz(s); i++){
            order.push_back(s[i]);
        }
    for (auto it = order.begin(); it != order.end(); it++){
        switch (*it){
            case '1':{
                total+=5;
                break;
            }
            case '2': {
                total += 3;
                break;
            }
            case '3': {
                total += 7;
                break;
            }
        }
    }
    cout << total << "\n";
    }
    return 0;
}
