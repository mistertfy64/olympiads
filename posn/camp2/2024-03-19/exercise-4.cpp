#include <bits/stdc++.h>
using namespace std;
#define tisb tuple<int,string,double>  

bool comp(tisb a, tisb b){
    if (get<2>(a) == get<2>(b)){
        return get<0>(a) < get<0>(b);
    }
    return get<2>(a) > get<2>(b);
}

int main(){
    int N;
    cin >> N;
    vector<tisb> students(N);
    for (int i = 0;i < N; i++){
       tisb student;
       int id;
       double score;
       string name;
       cin >> id >> name >> score;
       student = {id,name,score};
       students.push_back(student);
    }
    sort(students.begin(),students.end(),comp);
    for (int i = 0 ; i < N; i++){
        cout << get<0>(students[i]) << " " << get<1>(students[i]) << "\n"; 
    }
    return 0;
}