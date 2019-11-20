#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double a,b,c,s,area;
   cin>>a>>b>>c;
   if(a+b > c && c>a && c>b || a+c > b && b>a && b>c || b+c > a && a>c && a>b){
   s = (a+b+c)/2;
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<area; }
   else{cout<<"triangle does not exist";}
}
