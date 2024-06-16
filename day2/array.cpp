#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int i,array[5]={1,2,7,8,9};
    int j,array2[5]={0};
    
    for(i=0;i<5;i++)
    {
     array2[i]=array[n-i-1];
    }

    for(j=0;j<5;j++)
    {
        cout<<array2[j]<<" ";
    }
    
}