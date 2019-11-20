#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,minn=0,maxx=0;
    cin>>a;
    d = a%10;
    c = a/10%10;
    b = a/100%10;
    a = a/1000;
    int x[5]={a,b,c,d};
    for(int i=0; i<4; i++)
    {
      if(x[i]<=x[minn]){minn=i;}
      if(x[i]>=x[maxx]){maxx=i;}
    }
    swap(x[maxx],x[minn]);
    a=0;
    for(int j=0; j<4; j++)
    {
        a = a + x[j] * pow(10,(3-j));
    }
    cout<<a;
}
