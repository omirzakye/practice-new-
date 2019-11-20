#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    double p=0.0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        p += 1.0/pow(cos(x),i);
    }
    cout<<p;
}
