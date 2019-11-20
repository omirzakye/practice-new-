#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    c = a%10;
    b = a/100;
    a = a/10%10;
    a = a*10 + c*100 +b;
    cout<<a;
}
