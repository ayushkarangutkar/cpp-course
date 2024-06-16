#include<iostream>
using namespace std;

int main(){
int i,array[5]={1,34,45,7,8};
int large = array[0];
for(i=1;i<5;i++)
{
    if(large<array[i]){
        large=array[i];
    }
}
cout<<large;

}

