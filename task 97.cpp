#include<iostream>
using namespace std;
int main()
{
    int ans;
    int res = 0;
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        ans=1;
        for(int j=0; i+j<=2*i; j++)
        {
            ans *= (i+j);
        }
        res += ans;
    }
    cout<<res;
}
