#include <bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
        // convert to queue
        int ans = 0, remaining = tickets[k], current = 0;
        std::queue<int> q;
        for (int i = 0; i < (int)tickets.size(); i++){
            q.push(tickets[i]);
        }
        // start
        while (true){
            int f = q.front();
            cerr << f << " " << current <<  "\n";
            if (f == 0){
                // do nothing
                cerr << "+0\n";
            } else {
                // do something
                cerr << "+1\n";
                ans++;
                if (current==k){
                    remaining--;
                    if (remaining==0){
                        return ans;
                    }
                }
            }
            q.pop();
            q.push(f-1);
            cerr << "pushed back " << f-1 << "\n";
            current++;
            current%=(int)tickets.size();
        }
}

int main(){
    vector<int> tickets = {5,1,1,1};
    cout << timeRequiredToBuy(tickets,0) << "\n";
    return 0;
}