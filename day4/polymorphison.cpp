#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
        int age;
        string name;
        int id;
        float perc;
        
       // student()
           // cout<<"the student is my"<<endl;
       // student(int a)
           // cout<<"constucter called is my";
        
        void student()
        {
            cout<<"this people is my"<<endl;
        }
        void student(int b)
        {
            cout<<"this is yours";
        }

};

int main()
{
    //student s1(3);
    student s1;
    s1.age=23;
    s1.name="soham";
    s1.id=3456;
    s1.perc=98.98;
    student(2);
    return 0;
    
}
