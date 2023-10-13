#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
    int n,m;
    char ch;
    cin>>n;  cin>>ch; cin>>m;
    if(ch == '+') {
        cout<<n+m<<endl;
    }
    else if(ch == '*') {
        cout<<n*m<<endl;
    }
    else if(ch == '-') {
        cout<<n-m<<endl;
    }
    else {
        cout<<n/m<<endl;
    }


    return 0;
}
