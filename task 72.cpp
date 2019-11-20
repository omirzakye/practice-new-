#include<iostream>
using namespace std;
int main()
{
    int x1,x2,y1,y2,a1,a2,b1,b2,x3,x4,y3,y4,d1,d2;
    cin>>x1>>y1>>a1>>a2>>x2>>y2>>b1>>b2;
    if(x1<x2){x3=x1;}
    else{x3=x2;}
    if(y1<y2){y3=y1;}
    else{y3=y2;}



    if(y3==y1 && a1 > b1+y2){d1 = a1;}
    if(y3==y1 && a1 <= b1+y2){d1 = b1+y2;}
    if(y3==y2 && b1 > a1+y1){d1 = b1;}
    if(y3==y2 && b1 <= a1+y1){d1 = a1+y1;}


    if(x3==x1 && a2 > b2+x2){d2 = a2;}
    if(x3==x1 && a2 <= b2+x2){d2 = b2+x2;}
    if(x3==x2 && b2 > a2+x1){d2 = b2;}
    if(x3==x2 && b2 <= a2+x1){d2 = a2+x1;}
    x4 = x3+d2;
    y4 = y3+d1;
    cout<<x3<<','<<y3<<endl<<x4<<','<<y4;
}
