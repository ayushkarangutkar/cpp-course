#include<iostream>
using namespace std;

void  fact(int n)
{
 int fact=1;
 for(int i=n; i>0; i--)
 {
    fact=fact*i;
 }
   cout<<" the factorial number is = "<<fact;
}

int main()
{
 int k=3;
 cout<<" Enter the factorialnumber";
 fact(k);
 return 0;   
    
}