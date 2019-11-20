#include<iostream>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    if(ax==bx && cy==by){dx=cx; dy=ay;}
    if(ax==cx && by==cy){dx=bx; dy=ay;}
    if(bx==ax && cy==ay){dx=cx; dy=by;}
    if(bx==cx && cy==ay){dx=bx; dy=by;}
    if(cx==ax && ay==by){dx=bx; dy=cy;}
    if(cx==bx && ay==by){dx=ax; dy=cy;}
    if(ax!=bx && ax!=cx){cout<<"rectangle is wrong";}
    else{cout<<'('<<dx<<','<<dy<<')';}
}
