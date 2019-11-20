#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int h,m,x;
    cin>>h>>m;
    x = (h*5-m)*6;
    cout<<x<<" or "<<360-abs(x);
}
