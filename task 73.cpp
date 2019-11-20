#include<iostream>
using namespace std;
int main()
{
    int x1,x2,y1,y2,a1,a2,b1,b2,x3,x4,y3,y4,d1,d2;
    cin>>x1>>y1>>a1>>a2>>x2>>y2>>b1>>b2;
    if(x1>x2 && y1<y2 && a1+y1<=b1 && a2+x1<=b2){cout<<"yes";}
    else{cout<<"no"<<endl;}
    if(x1>x2 && y1<y2 && a1+y1<=b1 && a2+x1<=b2 || x2>x1 && y2<y1 && b1+y2<=a1 && b2+x2<=a2){cout<<"yes";}
    else{cout<<"no"<<endl;}
    if(y2>y1 && x1==x2 && y1+a1>y2){cout<<"yes";}
    else if(y1>y2 && x2==x1 && y2+b1>y1){cout<<"yes";}
    else if(x2>x1 && y1==y2 && x1+a2>x2){cout<<"yes";}
    else if(x1>x2 && y2==y1 && x2+b2>x1){cout<<"yes";}
    else{cout<<"no";}
}
