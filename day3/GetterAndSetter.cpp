#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    float cgpa;
public:
    string name;
    int age;
    string branch;

    float getter()
    {
        return cgpa;
    }

    void setter(float marks)
    {
       cgpa = marks;
    }
};

int main()
{
    Student s1;
    s1.name="raj";
    s1.age=15;
    s1.branch="IT";

    s1.setter(50.5);
    float sadfsdf=s1.getter();
    cout<<sadfsdf;
    cout<<s1.name<<s1.age<<s1.branch;
    return 0;
}