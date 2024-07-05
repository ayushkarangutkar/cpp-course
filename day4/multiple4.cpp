#include<iostream>
using namespace std;

class yash
{
    public:
    string name;
    int age;
    
    yash()
    {
        cout<<"The is aryan topper1"<<endl;
    }
};
class bhavik
{
    public:
    int id;
    float card;
    
    bhavik()
    {
        cout<<"The is ayush topper2"<<endl;
    }
};
class kush:public yash,public bhavik
{
    public:
    kush()
    {
       cout<<"The is purva topper3"<<endl;
    }
};
int main()
{
    kush k1;
    return 0;
}
