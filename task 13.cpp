#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a = 0.1, b=0.2, x=1.0;
     double y = pow((x*x+b), 1/5) - (b*b*pow((sin(x+a)),3))/x;
     cout<<y;
}
