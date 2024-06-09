#include<iostream>
using namespace std;

int main() 
{
    int age;
    cout<<"enter the age";
    cin>>age;
    if( age>=18)
    {
        cout<<" the person is eligible for licenes";
    }
    else
    {
        cout<<" the person is not eligible for licenes";
    }
    return 0;
}