#include<iostream>
using namespace std;

void swap(int a,int b)
{
 int c=a;
     a=b;
     b=c;
     cout<<a<<" "<<b;
}

int main()
{
 int a=5;
 int b=7;
 swap(a,b);
 return 0;   
    
}
