#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double sum=0.0;
    for(int i=1; (2.0+i)/(4.0+i) <= 111.0/113.0; i=i+2)
    {
        sum += cos((2.0+i)/(4.0+i));
    }
    cout<<sum;
}
