//C++ Program to Find Largest Among Three Numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"\nEnter value of three number";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"\n The largest num is "<<num1;
    }
    else if( num2>num1 && num2>num3)
    {
       cout<<"\n The largest num is "<<num2;
    }
    else if( num3>num2 && num3>num2)
    {
            cout<<"\n The largest num is "<<num3;
    }
    else 
    {
        cout<<"\nAll number are equal";
    }
    return 0;
}
