#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=28 && b==02 && c>0){cout<<"yes";}
    else if(a<=30 && b<=12 && b!=02 && c>0){cout<<"yes";}
    else if(a<=31 && b==01 || b==03 || b==05 || b==07 || b==9 || b==10 || b==12 && c>0){cout<<"yes";}
    else cout<<"no";
}
