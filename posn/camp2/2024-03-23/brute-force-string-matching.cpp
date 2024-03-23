#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt = "blahblahblah", pat = "blah";
    int found = txt.find(pat);
    while (found != string::npos){
        cout << "found at index: " << found << "\n";
        found = txt.find(pat,found+1);
    }
    return 0;
}
