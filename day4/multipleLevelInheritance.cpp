#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
        person(){
            cout<<"constructor of person"<<endl;
        }
        void fun(){
            cout<<"fun called"<<endl;
        }
};

class son : public person
{
    public:
    son()
    {
        cout<<"constructor of son"<<endl;
    }
};

class daughter:public son
{
    public:
    daughter()
    {
        cout<<"constuctor of daughter";
    }
};

int main(){

    daughter d1;
    d1.fun();
    return 0;

}