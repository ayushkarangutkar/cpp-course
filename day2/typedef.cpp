#include<iostream>
#include<string>
using namespace std;

typedef struct employee
{
    char name[50];
    int salary;
}emp;

int main()
{
    emp e1;
    cout<<"Enter employee record"<<endl;
    cout<<"Employee name"<<"\t"<<"\n";
    cin>>e1.name;
    cout<<"Enter employee salary"<<endl;
    cin>>e1.salary;
    cout<<"Student name is "<<e1.name<<endl;
    cout<<"Student roll_no is "<<e1.salary;
    return 0;
}
