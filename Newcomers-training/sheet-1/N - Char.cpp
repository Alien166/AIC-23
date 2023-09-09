#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  char ch;  cin>>ch;
  if(ch>='a' && ch<='z') {
      ch -=32;
  } else {
      ch +=32;
  }
  cout<<ch;
}

