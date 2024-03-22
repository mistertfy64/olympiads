#include <bits/stdc++.h>
using namespace std;

/*
Given an array of integers temperatures represents the
daily temperatures, return an array answer such that
answer[i] is the number of days you have to wait after
the ith day to get a warmer temperature.
*/

vector<int> dailyTemperatures(vector<int> temperatures) {
        vector<int> appeared(101,0), answer;
        reverse(temperatures.begin(),temperatures.end());  
        for (int i = 0; i < (int)temperatures.size(); i++){
            bool ok = false;
            for (int t = temperatures[i]+1; t<=100; t++){
                if (appeared[t]>0){
                    ok = true;
                }
            }
            if (ok){
                int ans = 999999;
                for (int t = temperatures[i]+1; t<=100; t++){
                    if (appeared[t]>0){
                        ans = min(appeared[t],ans);
                    }
                }   
                answer.push_back(ans-1);
            } else {
                answer.push_back(0);
            }
            appeared[temperatures[i]]=1;
            for (int t = 30; t <= 100; t++){
                if (appeared[t]>0){
                    appeared[t]++;
                }
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }

int main(){
    vector<int> arr = {89,62,70,58,47,47,46,76,100,70};
    vector<int> ans = dailyTemperatures(arr);
    for (auto i : ans){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}