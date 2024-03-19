#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> lhs, pair<int,int> rhs){
    if (lhs.second == rhs.second){
        return lhs.first > rhs.first;
    }
    return lhs.second < rhs.second;
}

int main(){
    int N;
    cin >> N;
    map<int,int> freq;
    vector<int> A(N);
    vector<pair<int,int>> appeared;
    for (int i =0  ; i < N; i++){
        cin >> A[i];
    }
    for (int i =0 ; i < N; i++){
        freq[A[i]]++;
    }
    for (auto it = freq.begin(); it != freq.end(); it++){
        appeared.push_back(make_pair(it->first,it->second));
    }
    sort(appeared.rbegin(),appeared.rend(),comp);
    cout << appeared[0].first << "\n";
    return 0;
}