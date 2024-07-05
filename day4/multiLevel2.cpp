#include<iostream>
using namespace std;

class yash
{
    public:
    yash()
    {
        cout<<"the is aryan topper1"<<endl;
    }
    void fun()
    {
        cout<<"the perctange is so good"<<endl;
    }
};
class bhavik:public yash
{
    public:
    bhavik()
    {
        cout<<"The is topper2"<<endl;
    }
};
class kush:public bhavik
{
    public:
    kush()
    {
        cout<<"The is topper3"<<endl;
    }
};
int main()
{
    yash y1;
    y1.fun();
    return 0;
}
