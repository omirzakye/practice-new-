#include<iostream>
using namespace std;
int main()
{
    double k;
    cin>>k;
    for (int i=0; i<100; i++)
    {
        cout<<(1+i)<<"$ - "<<(1+i)*k<<" p - "<<(1+i)*k/20<<" kg"<<endl;
    }
}
