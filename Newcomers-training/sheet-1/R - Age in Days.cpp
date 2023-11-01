#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
  int num;   cin>>num;
  cout<<num / 365 <<" years\n";
  num %=365;
  cout<<num / 30<<" months\n";
  num %=30;
  cout<<num<<" days\n";

    return 0;
}
