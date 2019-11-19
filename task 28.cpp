#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double a, b;
     cin>>a>>b;
     for(int i=0; i<5; i++)
     {
         a += a/100.0*b;
     }
     cout<<a;
}
