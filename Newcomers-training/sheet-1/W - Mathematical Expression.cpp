#include <bits/stdc++.h>
using namespace std;

int main() {
    int  A , B , C;
    char ch1 ,ch2;
    cin>>A>>ch1>>B>>ch2>>C;
    if(ch1 == '+') {
        if(A + B == C) {
            cout<<"Yes";
        } else {
            cout<<A+B;
        }
    } else if (ch1 == '-') {
        if(A-B == C) {
            cout<<"Yes";
        } else {
            cout<<A-B;
        }
    } else if (ch1 == '*') {
        if(A*B == C) {
            cout<<"Yes";
        } else {
            cout<<A*B;
        }
    }

    return 0;
}
