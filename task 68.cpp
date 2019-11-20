#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>a>>b>>c;
    x = (-b + sqrt(b*b - 4 *a*c))/2*a;
    cout<<x<<' ';
    x = (-b - sqrt(b*b - 4 *a*c))/2*a;
    cout<<x;
}
