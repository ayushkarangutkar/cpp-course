#include<iostream>
using namespace std;

enum year{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sept,Oct,Nov,Dec};
int main()
{
    int i;
    for(i=2012;i<=2024;i++)
    {
        cout<<"The year is "<<i<<endl;
    }
    return 0;
}
