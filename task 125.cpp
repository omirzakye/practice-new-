#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,h;
    cin>>a>>b>>h;
    for(int i=a; i<=b; i++)
    {
        cout<<i*i - sin(i);
        for(int j=0; j<h; j++)
        {
            cout<<' ';
        }
    }
}
