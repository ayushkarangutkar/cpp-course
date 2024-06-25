#include<iostream>
using namespace std;

class people
{
    public:
    string name;
    int age;
    float salary;
    
    people()
    {
        cout<<"constucter called"<<" "<<"1st person"<<endl;
    }
    ~people()
    {
        cout<<"destructer called"<<" "<<"last person"<<endl;
    }
};

int main()
{
  people s1;
  s1.name="yash";
  s1.age=15;
  s1.salary=15000.00;
  
  cout<<s1.name<<endl<<s1.age<<endl<<s1.salary<<endl;
  return 0;
}
