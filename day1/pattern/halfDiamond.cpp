// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main()
{
    int n;
    n=5;
    for( int i=0;i<5;i++)
    { 
        for( int j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
  for( int j=4;j>=1;j--)
  {
    for( int i=1;i<=j;i++)
    {
      cout<<" * ";
    }
    cout<<endl;
  }
  return 0;
}
