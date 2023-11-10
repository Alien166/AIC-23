#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
 int A,B;
 char ch;
 cin>> A >> ch >> B;
 if(ch == '<')
 {
     if(A < B) {
         cout<<"Right";
     } else {
         cout<<"Wrong";
     }
 } else if (ch == '>') {
     if(A > B) {
         cout<<"Right";
     } else {
         cout<<"Wrong";
     }
 } else if(ch == '=') {
     if( A == B){
         cout<<"Right";
     } else {
         cout<<"Wrong";
     }
 }

    return 0;
}
