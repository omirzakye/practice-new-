#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a+b==11 || a+b==15){cout<<"north";}
    if(a+b==12){cout<<"west";}
    if(a+b==13){cout<<"south";}
    if(a+b==14 || a+b==10){cout<<"east";}
}
