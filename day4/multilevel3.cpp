#include<iostream>
#include<string>
using namespace std;

class topper
{
    public:
    string name;
    int age;
    int id;
    topper()
    {
        cout<<"he is the topper"<<endl;
    }
    void fun()
    {
        cout<<"hello world in these now"<<endl;
    }
};
class average : public topper
{
    public:
    average()
    {
        cout<<"the average student is the best "<<endl;
    }
};
class backbencher : public average
{
    public:
    backbencher(int a)
    {
        cout<<"the backbencher is danger for life"<<endl;
    }
};
    int main()
    {
        backbencher b1(3);
        b1.name="yash";
        b1.age=17;
        b1.id=1138;
        
        cout<<b1.name<<endl<<b1.age<<endl<<b1.id<<endl;
        b1.fun();
        return 0;
    }
