#include<iostream>
using namespace std;
int main()
{
      for(int i=0; i<4; i++)
      {
          for(int j=0; j<=12; j++)
          {
              if(i==j || j+i==6 || j+i==12 || j-i==6 || j-i==12){cout<<'*';}
              else{cout<<' ';}
          }
          cout<<endl;
      }
}
