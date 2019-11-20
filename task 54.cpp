#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a>>b>>c;
    if(a<5){d++;}
    if(b<5){d++;}
    if(c<5){d++;}
    if(d==2){cout<<"yes";}
    else{cout<<"no";}
}
