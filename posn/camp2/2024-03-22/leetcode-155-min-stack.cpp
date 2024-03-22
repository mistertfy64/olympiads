#include <bits/stdc++.h>
using namespace std;

/* 
Design a stack that supports push, pop, top, and
retrieving the minimum element in constant time.
*/

class MinStack{
    
    protected:
        vector<int> values;
        stack<int> lowest;
        int size = 0;

    public:
        void push(int val){
            size++;
            values.push_back(val);
            if ((int)lowest.size() == 0 || values[lowest.top()] >= val ){
                lowest.push(size-1);
            } else {
                lowest.push(lowest.top());
            }
        }   

        void pop(){
            size--;
            values.pop_back();
            lowest.pop();
        }

        int top(){
            return values.back();
        }
        
        int getMin(){
            return values[lowest.top()];
        }

        MinStack(){}
};

int main(){
    MinStack mst = MinStack();
    mst.push(3);
    mst.push(-99999);
    mst.push(8888);
    mst.push(5555555);
    mst.push(-77777777);
    mst.push(999);
    mst.push(23);
    mst.push(44);

    cout << mst.top() << "\n";
    cout << mst.getMin() << "\n";

    mst.pop();
    mst.pop();
    mst.pop();
    mst.pop();

    cout << mst.top() << "\n";
    cout << mst.getMin() << "\n";
    return 0;
}