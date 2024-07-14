#include<iostream>
using namespace std;

int main()
{
    int i,array[10]={23,45,67,89,65,43,32,12,34,90};
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
    
    cout<<"Sorted of array element"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}