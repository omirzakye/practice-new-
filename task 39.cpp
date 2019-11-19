#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int x,y;
     cin>>x>>y;
     if(x>y){cout<<"YES";}
     else{swap(x,y); cout<<x<<' '<<y;}
}
