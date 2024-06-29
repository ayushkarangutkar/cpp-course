#include<iostream>
using namespace std;

class people
{
    public:
         int age;
};
class animal:public people
{
    public:
    string name;
    int id;
};
int main()
{
    animal a1;
    a1.name="max";
    a1.age=5;
    a1.id=1104;
    
    cout<<a1.name<<endl<<a1.age<<endl<<a1.id<<endl;
    return 0;
}
