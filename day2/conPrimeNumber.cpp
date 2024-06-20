// Online C++ compiler to run C++ program online
// The number is prime  or not prime

#include <iostream>
using namespace std;
int main()
{
  int k,num;
  cout<<"\nEnter the number";
  cin>>num;
  k=2;
  while(k<=num-1)
  {
      if(num%k==1)
      {
          cout<<"\n the is not prime number"<<num;
          break;
      }
      k++;
  }
    if(k==num)
    {
        cout<<"\n The number is prime number"<<num;
    }

      return 0;
  }
