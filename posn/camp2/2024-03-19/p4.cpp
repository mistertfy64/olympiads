#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string,int> a, pair<string,int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    map<string,int> freq;
    vector<pair<string,int>> appeared;
    int N;
    cin >> N;
    vector<string> words(N);
    for (int i =0 ; i < N; i++){
        cin >> words[i];
    }
    for (int i =0 ; i < N; i++){
        freq[words[i]]++;
    }
    for (auto it = freq.begin(); it != freq.end(); it++){
        appeared.push_back(make_pair(it->first,it->second));
    }
    sort(appeared.begin(),appeared.end(),comp);
    for (int i =0 ; i < 3; i++){
        cout << appeared[i].first << "\n";
    }
    return 0;
}
