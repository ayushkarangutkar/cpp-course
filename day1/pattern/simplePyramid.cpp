#include<iostream>
using namespace std;

int main()
{
    int n;
    n=5;
    for( int i=0;i<5;i++)
    { 
        for( int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
