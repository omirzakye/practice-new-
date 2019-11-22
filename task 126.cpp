#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,counts=0;;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){counts++;}
    }
    cout<<counts;
}
