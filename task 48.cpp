#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int x,y,z;
     cin>>x>>y>>z;
     int maxx = x+y, a=x,b=y;
     if(x+z>maxx){maxx=x+z;a=x;b=z;}
     if(y+z>maxx){maxx=y+z;a=y;b=z;}
     cout<<maxx<<' '<<a<<' '<<b;
}
