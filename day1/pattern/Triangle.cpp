#include <iostream>
using namespace std;
int main() 
{
    int n,i,j;
    n=5;
    
    for( int i=1;i<=5;i++)
    {
        for( int j=1;j<=5;j++)
        {
            if(i<=n-j)
            {
                cout<<" ";
            }
            else
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
  return 0; 
}
