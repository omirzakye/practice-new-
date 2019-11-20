#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    d = a%10;
    c = a/10%10;
    b = a/100%10;
    a = a/1000;
    if(a>b && b>c && c>d){cout<<"yes";}
    else{cout<<"no";}
}
