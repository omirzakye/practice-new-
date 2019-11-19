#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int sum=0,x[3];
     for(int i=0; i<3; i++)
        cin>>x[i];
     for(int i=0; i<3; i++)
        {
              if(x[i]%5==0){sum += x[i];}
        }
     if(sum==0){cout<<"error";}
     else{cout<<sum;}
}
