#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    if(c<z){cout<<"yes";}
    else if(c==z && b<y){cout<<"yes";}
    else if(c==z && b==y && a<x){cout<<"yes";}
    else{cout<<"no";}
}
