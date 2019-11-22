#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<20; i++)
    {
            if(i%2==0){for(int k=0; k<5; k++){cout<<1;}cout<<endl;}
            else{for(int k=1; k<=i; k++){cout<<k<<' ';}cout<<endl;}
    }
}
