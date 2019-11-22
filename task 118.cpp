#include<iostream>
using namespace std;
int main()
{
    int counts = 0;
    int n;
    while(n!=0)
    {
        cin>>n;
        if(n%2==0){counts++;}
    }
    cout<<counts-1;
}
