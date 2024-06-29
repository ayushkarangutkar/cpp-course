#include<iostream>
#include<string>
using namespace std;

class school   //base class 1
{
    public:
        int years;
        int id;
        school()
        {
            cout<<"constructor of school"<<endl;
        }
};
class teacher  //base class 2
{
    public:
    float salary;
    int id;
    teacher()
    {
        cout<<"constructor of teacher"<<endl;
    }
}
class student : public school, public teacher{

}

int main(){

    student s1;
    return 0;

}