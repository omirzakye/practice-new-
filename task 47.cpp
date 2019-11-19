#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int x,y,z;
     cin>>x>>y>>z;
     int maxx=x;
     if(y>maxx){maxx=y;}
     if(z>maxx){maxx=z;}
     cout<<maxx;
}
