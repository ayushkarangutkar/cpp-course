#include<iostream>
using namespace std;

class student
{
    private :
         int fees;
    public:
         string name;
         int age;
         float perc;
         long roll;
    
    int getter()
    {
        return fees;
    }
    void setter(int money)
    {
        money=fees;
    }
};

int main()
{
    student s1;
    s1.name="soham";
    s1.age=23;
    s1.perc=98.78;
    s1.roll=2376098;
    
    s1.setter(3000);
    int money=s1.getter();
    
    cout<<s1.name<<endl<<s1.age<<endl<<s1.perc<<endl<<s1.roll<<endl;
    cout<<money;
    return 0;
}
