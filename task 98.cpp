#include<iostream>
using namespace std;
int main()
{
    double res = 10.0;
    for(int i=2; i<=10; i++)
    {
        res += res/10;
        cout<<"day "<<i<<" - "<<res<<", ";
    }
    cout<<endl;
    double sum=10.0;
    res = 10.0;
    for(int i=2; i<=7; i++)
    {
        res += res/10;
        sum += res;
    }
    cout<<sum<<endl;
    double ans=10.0;
    res=10.0;
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        res += res/10;
        ans += res;
    }
    cout<<ans<<endl;
    res = 10.0;
    int j=1;
    while(res<=80.0)
    {
        res += res/10;
        j++;
    }
    cout<<j;
}
