#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,array[10]={23,45,56,78,89,19,65,43,32,35};
    int key=89;
    for(i=0;i<10;i++)
    {
        if(array[i]==key)
        {
            cout<<"INDEX - "<<i;
        }
    }
    return 0;
}
