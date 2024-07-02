#include<iostream>
#include<string>
using namespace std;

class person
{ 
    public:
    string name;
    int age;
    long card;
    
    void fun(int a)
    {
        cout<<"Person works for all years"<<endl;
    }
    void fun()
    {
        cout<<"The person is nothing but a creature";
    }
};
int main()
{
    person p1;
    p1.name="soham";
    p1.age=23;
    p1.card=23456;
    p1.fun(3);
    
    cout<<p1.name<<endl<<p1.age<<endl;
    
    return 0;
}
