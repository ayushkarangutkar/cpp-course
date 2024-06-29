#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person {
    public:
        int rollNo;
};

int main(){
    Student s1;
    s1.name="riyo";
    s1.rollNo=1104;
    s1.age=23;

    cout<<s1.name<<s1.rollNo<<s1.age;
    return 0;

}