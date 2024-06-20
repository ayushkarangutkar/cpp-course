#include<iostream>
using namespace std;
int main()
{
    int f1,f2,f3,i;
    f1=f2=1;
    cin>>f1;
    cin>>f2;
    
    for(i=2;i<10;i++)
    {
        f3=f1+f2;
        cin>>f3;
        f1=f2;
        f2=f3;
    }
    return 0;
}
