#include<iostream>
using namespace std;

class navjeevan
{
    public:
    string name;
    int age;
    int roll_no;
    
    navjeevan()
    {
        cout<<"the topper of class"<<endl;
    }
    
    ~navjeevan()
    {
        cout<<"the rank 2 is doesn't matter"<<endl;
    }
};
int main()
{
    navjeevan n1;
    n1.name="aryan";
    n1.age=17;
    n1.roll_no=1104;
    
    cout<<"name"<<"-"<<n1.name<<endl<<"age"<<"-"<<n1.age<<endl<<"roll_no"<<"-"<<n1.roll_no<<endl;
    return 0;
}
