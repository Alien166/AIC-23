#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
  float num;   cin>>num;
  if(num>=0 && num <=25) cout<<"Interval [0,25]";
  else if(num > 25 && num <= 50) cout<<"Interval (25,50]";
  else if(num > 50 && num <= 75) cout<<"Interval (50,75]";
  else if(num > 75 && num <= 100) cout<<"Interval (75,100]";
  else cout<<"Out of Intervals";

    return 0;
}
