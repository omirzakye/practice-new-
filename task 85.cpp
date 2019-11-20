#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       if(i==1 || i==n){cout<<"[[[[[[[[[[[[[[[       ]]]]]]]]]]]]]]]"<<endl;}
       if(i==2)for(int i=2; i<(n/6+1); i++)
        {
            cout<<"[::::::::::::::       ::::::::::::::]"<<endl;
        }
        if(i==n/6+1 || i==n-(n/6+1)+1){cout<<"[::::::[[[[[[[:       :]]]]]]]::::::]"<<endl;}
        if(i==n-(n/6+1)+2)for(int i=n-(n/6+1)+2; i<=n-1; i++)
        {
            cout<<"[::::::::::::::       ::::::::::::::]"<<endl;;
        }
        if(i==(n/6+1)+1)
            {for (int i=(n/6+1)+1; i<n-(n/6+1); i++)
            {
                cout<<"[:::::[                       ]:::::]"<<endl;
            }
            }
    }
}
