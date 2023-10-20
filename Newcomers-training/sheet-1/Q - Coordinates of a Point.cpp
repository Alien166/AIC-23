#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
  float a,b;
  cin>>a>>b;
  if(a>0 && b>0) cout<<"Q1";
  else if(a<0 && b>0) cout<<"Q2";
  else if(a<0 && b<0) cout<<"Q3";
  else if(a>0 && b<0) cout<<"Q4";
  else if(a==0 && b==0) cout<<"Origem";
  else if(a==0 && b) cout<<"Eixo Y";
  else if(a&&b==0) cout<<"Eixo X";
    return 0;
}
