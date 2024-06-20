// Online C++ compiler to run C++ program online
//Reverse a Number in C++

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
      cout<<"\n The reverse number is"<<reverse;
      return 0;
  }
