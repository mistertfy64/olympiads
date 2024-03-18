#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> pool;
    int N;
    cin >> N;
    for (int i = 0 ;i < N; i++){
        int q, a;
        cin >> q >> a;
        if (q==1){
            pool.push_back(a);
        } else if (q==2){
            sort(pool.begin(),pool.end());
            cout << find(pool.begin(),pool.end(),a)-pool.begin()+1 << "\n";
        }
    }
    return 0;
}