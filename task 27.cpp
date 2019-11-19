#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int a, b, c;
     cin>>a>>b>>c;
     a = a+b;
     b = c-(a-b);
     c = a-(b-c+a) + b-c+a + c;
     cout<<a<<' '<<b<<' '<<c;
}
