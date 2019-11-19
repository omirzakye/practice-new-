#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double x,a,b;
     cin>>x>>a>>b;
     for( int i=0; i<x; i++)
     {
         b += 3.0;
     }
     b += b/100.0 * a;
     cout<<b;
}
