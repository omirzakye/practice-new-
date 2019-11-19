#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int x[4],a[4],maxx;
     for(int i=0; i<4; i++)
     {
         cin>>x[i];
     }
     int j=0;
     for(int i=0; i<4; i++)
     {
         if(x[i]%2==0){a[j]=x[i]; maxx=a[j]; j++;}
     }
     for (int i=0; i<j; i++)
     {
         if(a[i] >= maxx){maxx = a[i];}
     }
     if(j==0){cout<<"not found";}
     else{cout<<maxx;}
}
