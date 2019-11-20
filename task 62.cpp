#include<iostream>
using namespace std;
int main()
{
  int a,c,e;
  cin>>a;
  e=a%10;
  c=a/100%10;
  a=a/10000;
  a = e + c*100 + a*10000;
  cout<<a;
}
