#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
 int x,y,z;
 cin>>x>>y>>z;
 if(x<=y && y<=z) cout<<x<<endl<<y<<endl<<z<<endl;
 else if (x<=z && z <=y) cout<<x<<endl<<z<<endl<<y<<"\n";
 else if (y<=z && y <=x) cout<<y<<endl<<z<<endl<<x<<"\n";
 else if (y<=x && x <=z) cout<<y<<endl<<x<<endl<<z<<"\n";
 else if (z<=x && x <=y) cout<<z<<endl<<x<<endl<<y<<"\n";
 else if (z<=y && y <=x) cout<<z<<endl<<y<<endl<<x<<"\n";
 cout<<endl;

 cout<<x<<"\n"<<y<<"\n"<<z<<"\n";


    return 0;
}
