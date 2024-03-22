#include <bits/stdc++.h>
using namespace std;

// broken lol

int main(){
    stack<string> st;
    string s;
    queue<string> q;
    while (cin >> s){
        if (s=="END"){
            break;
        }
        q.push(s);
    }
    while (!q.empty()){
        string current = q.front();
        q.pop();
        if (current == "+"){
            while (st.top() == "+" || st.top() == "-" || st.top() == "*" || st.top()=="/"){
                    cout << st.top() << " ";
                    st.pop();
                }
                st.push("+");
        } else if (current=="-"){
            while (st.top() == "+" || st.top() == "-" || st.top() == "*" || st.top()=="/"){
                    cout << st.top() << " ";
                    st.pop();
                }
                st.push("-");
        } else if (current == "*"){
            if (st.top() == "+" || st.top() == "-" || st.empty() || st.top() == "("){
                st.push(current);
            } else {
                while (st.top() == "*" || st.top()=="/"){
                    cout << st.top() << " ";
                    st.pop();
                }
                st.push("*");
            }
        } else if (current == "/"){
            if (st.top() == "+" || st.top() == "-" || st.empty() || st.top() == "("){
                st.push(current);
            } else {
                while (st.top() == "*" || st.top()=="/"){
                    cout << st.top() << " ";
                    st.pop();
                }
                st.push("/");
            }
        } else if (current == "("){
            st.push(current);
        } else if (current == ")"){
            while (st.top() != "("){
                cout << st.top() << " ";
                st.pop();
            }
            st.pop();
        } else {
            cout << current << " ";
        }
    }
    return 0;
}
