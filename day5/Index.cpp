#include<iostream>
using namespace std;

int main()
{
    int i,arr[10]={23,67,78,98,54,34,45,67,45,43};
    int key=98;
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            cout<<"INDEX - "<<i;
        }
    }
    return 0;
}
