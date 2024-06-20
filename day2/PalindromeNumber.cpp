// Online C++ compiler to run C++ program online
// The number is palindrome  or not palindrome 

#include <iostream>
using namespace std;
int main()
{
  int reverse,num,digit,n;
  cout<<"\nEnter the number";
  cin>>num;
  n=num;
  reverse=0;
  while(num!=0)
  {
      digit=num%10;
      reverse=reverse*10+digit;
      num=num/10;
  }
    if(n==reverse)
    {
        cout<<"\n The number is palindrome";
    }
    else
    {
        cout<<"\n The number is not palindrome";
    }
    
      return 0;
  }
