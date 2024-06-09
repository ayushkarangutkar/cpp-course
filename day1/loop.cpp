#include<iostream>
using namespace  std;

int main()
{
    int n;
    n=5;
    for( int i =0;i<n;i++)
    {
        for( int j=0;j<=i;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    int a =10;
    while( a<20 )
    {
        cout<<a<<endl;
        a++;
    }

    int b = 10;
    do{
        cout<<b<<endl;
        b++;
    }while(b<20);


    
}