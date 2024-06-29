#include<iostream>
#include<string>
#include<math.h>
using namespace std;

abstract class Student 
 {
    private:
        int rollNo;
        string name;
        int age;
};

class car :  public Student
{
    public:
    string name;
    int price;
};

int main(){
    Student s1;

    cout<<s1.name<<s1.rollNo<<s1.age;
    return 0;

}