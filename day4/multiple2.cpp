#include<iostream>
using namespace std;

class people
{
   public:
    string name;
    int age;
    
    people()
    {
        cout<<"constuctor of people"<<endl;
    }
};
class person 
{
    public:
    int id;
    float salary;
    
    person()
    {
        cout<<"constuctor of person"<<endl;
    }
};
class child:public people,public person
{
  public:
  child()
  {
      cout<<"constuctor of child";
  }
};
int main()
{
    child c1;
    return 0;
}
