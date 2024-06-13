// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n,i,j;
    n=8;
    
    for( int i=2;i<=8;i++)
    {
        for( int j=2;j<=8;j++)
        {
            if(j>=i)
            {
                cout<<" *  ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
  
        for( int i=2;i<=8;i++)
    {
        for( int j=2;j<=8;j++)
        {
            if(i<=n-j)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" *  ";
            }
        }
        cout<<endl;
    }
  return 0; 
}
