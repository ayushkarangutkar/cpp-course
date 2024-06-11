
#include <iostream>
using namespace std;
int main() 
{
  int n,i,j;
  n=5;
  for( int j=5;j>=1;j--)
  {
    for(i=1;i<=j;i++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
