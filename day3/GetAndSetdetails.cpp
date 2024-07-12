#include <iostream>
#include<string>
using namespace std;

class navjeevan
{
    private:
       float marks;
    public:
      string name;
      int age;
      string branch;
    
    float getter()
    {
        return marks;
    }
    void setter(float ear)
    {
        marks=ear;
    }
};
    int main()
    {
        navjeevan n1;
        n1.name="aryan";
        n1.age=17;
        n1.branch="CO";
        
        n1.setter(84.60);
        float ear=n1.getter();
        cout<<"NAME"<<"-"<<n1.name<<endl;
        cout<<"AGE"<<"-"<<n1.age<<endl;
        cout<<"BRANCH"<<"-"<<n1.branch<<endl;
        cout<<"MARKS"<<"-"<<ear<<endl;

    return 0;
}
