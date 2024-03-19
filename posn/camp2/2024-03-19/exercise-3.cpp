#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,string> a,pair<int,string>b){
    return a.first > b.first;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int,string>> students(N);
    for (int i =0 ; i < N; i++){
        cin >> students[i].first >> students[i].second;
    }
    sort(students.begin(),students.end(),comp);
    for (int i =0 ; i < N; i++){
        cout << students[i].second << "\n";
    }
    return 0;
}