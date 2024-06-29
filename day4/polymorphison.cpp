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
};

int main()
{
    student s1;
    s1.age=23;
    s1.name="soham";
    s1.id=3456;
    s1.perc=98.98;

    return 0;
    
}