#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main() {
 double n;   cin>>n;
 int integer_part=static_cast<int>(n);
 float decimal_part= n - integer_part;
 if (decimal_part == 0) {
     cout<<"int "<<integer_part;
 } else {
     cout<<"float "<<integer_part<<" "<<decimal_part;
 }


    return 0;
}
