#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c,d;
    cin>>x;
    for(int i=0; i<4; i++){
    d=x%10;
    c=x/10%10;
    b=x/100%10;
    a=x/1000;
    if(a>=5 && b<5){x=b*1000+a*100+c*10+d;}
    d=x%10;
    c=x/10%10;
    b=x/100%10;
    a=x/1000;
    if(b>=5 && c<5){x=a*1000+c*100+b*10+d;}
    d=x%10;
    c=x/10%10;
    b=x/100%10;
    a=x/1000;
    if(c>=5 && d<5){x=a*1000+b*100+d*10+c;}
    }
    cout<<x;
}
