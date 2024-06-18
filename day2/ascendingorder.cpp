// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int i,array[10]={2,4,6,7,8,3,4,7,9,6}; 
    int j,temp;
    
    for(i=0;i<10;i++)
    {

    for(j=i+1;j<10;j++)
    {
        if(array[i]>array[j])
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    }
    cout<<"Ascending order array";
    for(i=0;i<10;i++)
    {
        cout<<endl<<array[i];
    }
    return 0;
}
    
    
