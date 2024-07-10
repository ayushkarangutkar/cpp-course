#include<iostream>
#include<string>
using namespace std;

class train
{
    private:
    float fees;
    public:
    string name;
    int age;
    
    train()
    {
        cout<<"the train is best for us"<<endl;
    }
    ~train()
    {
        cout<<"the train will gets soon"<<endl;
    }
    
    void ran()
    {
        cout<<"the ran is my "<<endl;
    }
    float getter()
    {
        return fees;
    }
    void setter(float money)
    {
        fees=money;
    }
};

class bus:public train
{
    public:
    bus()
    {
        cout<<"the bus is faster than train"<<endl;
    }
};
class plane:public bus
{
    public:
    plane(int a)
    {
        cout<<"the plane is faster than bus"<<endl;
    }
};
int main()
{
    plane t1(3);
    t1.name="soham";
    t1.age=23;
    t1.ran();
    
    t1.setter(3000.45);
    float money=t1.getter();
    
    cout<<t1.name<<endl<<t1.age<<endl<<money<<endl;
    return 0;
}
