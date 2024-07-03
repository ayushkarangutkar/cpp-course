#include<iostream>
using namespace std;

int main()
{
    int n,num,x,sum=0;
    cout<<"Enter the number";
    cin>>num;
    n=num;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
     cout<<"sum of the digit is"<<sum;
     return 0;
}
