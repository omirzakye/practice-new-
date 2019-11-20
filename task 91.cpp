#include<iostream>
using namespace std;
int main()
{
    double sum = 0.0;
    for (int i=1; (1.0+i)/(2.0+i)<=0.9; i++)
    {
        sum = sum + (1.0+i)/(2.0+i);
    }
    cout<<sum;
}
