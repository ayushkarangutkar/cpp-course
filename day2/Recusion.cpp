#include<iostream>
using namespace std;

long factorial(int n)
{
    int fact;
    if(n<=1)
    {
       return(1) ;
    }
    else
    {
        return(n*factorial(n-1));
    }
}
int  main()
{
    long n;
    cout<<"Enter the factorial  number"<<endl;
    cout<<"n = ";
    cin>>n;
    cout<<"n!= "<<n<<"\n"<<factorial(n);
}
