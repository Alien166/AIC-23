#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  char ch;  cin>>ch;
  if(ch>='0'&&ch<='9') {
      cout<<"IS DIGIT";
  }
  else if(ch>='A'&& ch<='Z') {
      cout<<"ALPHA\n""IS CAPITAL";
  } else {
      cout<<"ALPHA\n""IS SMALL";
  }
}

