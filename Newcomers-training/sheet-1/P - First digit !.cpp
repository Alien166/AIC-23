#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
   int num, first_digit;   cin>>num;
   first_digit = num / 1000;
   if(first_digit %2 == 0) {
       cout<<"EVEN\n";
   } else {
       cout<<"ODD\n";
   }
    return 0;
}
