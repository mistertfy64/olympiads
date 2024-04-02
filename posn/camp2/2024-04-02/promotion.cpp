#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<string,int> prices;
map<pair<string,string>,int> specialPrices;
map<string,int> remaining;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // init
    prices["001"] = 60;
    prices["002"] = 65;
    prices["003"] = 20;
    prices["004"] = 20;
    prices["005"] = 30;
    prices["006"] = 15;
    prices["007"] = 50;
    prices["008"] = 45;
    prices["009"] = 20;
    specialPrices[{"001","002"}] = 110; // 5 discount
    specialPrices[{"003","004"}] = 30; // 10 discount
    specialPrices[{"005","006"}] = 40; // 5 discount
    specialPrices[{"006","007"}] = 55; // 10 discount
    specialPrices[{"006","008"}] = 50; // 10 discount
    specialPrices[{"005","009"}] = 40; // 10 discount
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string Pr;
        int Pi;
        cin >> Pr >> Pi;
        remaining[Pr] = Pi;
    }
    // print value w/o promotion
    ll total = 0;
    for (auto x : remaining){
        total += remaining[x.first]*prices[x.first];
    }
    cout << total << "\n";
    // print value with promotion
    // dont worry about 001 002 003 004
    ll newTotal = 0;
    int x = 0;
    // 001 + 002
    newTotal += min(remaining["001"],remaining["002"])*110;
    x = min(remaining["001"],remaining["002"]);
    remaining["001"]-=x;
    remaining["002"]-=x;
    newTotal += remaining["001"]*60;
    newTotal += remaining["002"]*65;
    // 003 + 004
    newTotal += min(remaining["003"],remaining["004"])*30;
    x = min(remaining["003"],remaining["004"]);
    remaining["003"]-=x;
    remaining["004"]-=x;
    newTotal += remaining["003"]*20;
    newTotal += remaining["004"]*20;
    // 006 + 007
    newTotal += min(remaining["006"],remaining["007"])*55;
    x = min(remaining["006"],remaining["007"]);
    remaining["006"]-=x;
    remaining["007"]-=x;
    // 006 + 008
    newTotal += min(remaining["006"],remaining["008"])*50;
    x = min(remaining["006"],remaining["008"]);
    remaining["006"]-=x;
    remaining["008"]-=x;
    // 005 + 009
    newTotal += min(remaining["005"],remaining["009"])*40;
    x = min(remaining["005"],remaining["009"]);
    remaining["005"]-=x;
    remaining["009"]-=x;
    // 005 + 006
    newTotal += min(remaining["005"],remaining["006"])*40;
    x = min(remaining["005"],remaining["006"]);
    remaining["005"]-=x;
    remaining["006"]-=x;
    // remaining
    newTotal += remaining["005"]*30;
    newTotal += remaining["006"]*15;
    newTotal += remaining["007"]*50;
    newTotal += remaining["008"]*45;
    newTotal += remaining["009"]*20;
    cout << newTotal << "\n";
    return 0;
}