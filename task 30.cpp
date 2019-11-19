#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int a;
     cin>>a;
     int b=a;
     int c=a;
     a *= a;
     cout<<a*a<<endl;
     b *= b;
     cout<<b*b*b<<endl;
     c *= c*c;
     int d=c;
     c *= c;
     cout<<c*c*d;
}
