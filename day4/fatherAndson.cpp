#include<iostream>
using namespace std;

class father
{
    public:
    string name;
    int age;
    float salary;
};
class child:public father
{
    public:
    string school;
    int roll;
};
int main()
{
   child c1;
   c1.name="riyo";
   c1.age=23;
   c1.salary=24000.20;
   c1.school="navjeevan(unbiased)";
   c1.roll=1104;
  
   
   cout<<c1.name<<endl<<c1.age<<endl<<c1.salary<<endl<<c1.school<<endl<<c1.roll<<endl;
   return 0;
}
