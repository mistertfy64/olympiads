// Lecturer probably bought LeetCode Premium but I haven't
// so solution may not be 100% correct (2024-03-22)


#include <bits/stdc++.h>
using namespace std;

class MovingAverage {
    public: 
        int size;
        deque<double> q;
        void next(double n){
            q.push_back(n);
            if ((int)q.size()>size){
                q.pop_front();
            }
            double total = 0;
            for (double x : q){
                total += x;
            }
            cout << total / q.size() << "\n";
        }

        MovingAverage(int s){
            size = s;
        }
};

int main(){
    MovingAverage movingAverage = MovingAverage(3);
    movingAverage.next(1); // return 1.0 = 1 / 1
    movingAverage.next(10); // return 5.5 = (1 + 10) / 2
    movingAverage.next(3); // return 4.66667 = (1 + 10 + 3) / 3
    movingAverage.next(5); // return 6.0 = (10 + 3 + 5) / 3
    return 0;
}