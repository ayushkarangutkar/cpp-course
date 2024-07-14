#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int arr[n]={10,20,30,40,50,60,70,80,90,100};
    int key=10;
    int start = 0;
    int end=n-1;
    bool isPresent = false;
    
    while(start<=end)
    {
        int mid=(start + end)/2;
        if(arr[mid]==key)
        {
            cout<<mid;
            isPresent = true;
            break;
        }
        if(arr[mid]>key)
        {
            end=mid;
        }
        else if(arr[mid]<key)
        {
            start = mid;
        }
    }
    
    if(isPresent==false)
    {
        cout<<" The element is not present";
    }
    return 0;
}