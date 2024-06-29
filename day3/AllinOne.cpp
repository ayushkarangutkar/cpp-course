#include<iostream>
using namespace std;

class tutorial
{
    private:
        float fees;
    
    public:
    int years;
    string name;
    int experience;
    
    tutorial()
    {
        cout<<"special ACADEMY by yash"<<endl;
        cout<<"here we provide  and so many thing that you don't no"<<endl;
    }
    ~tutorial()
    {
        cout<<" first 20 student gets discount"<<endl;
        cout<<"and also people which is left by madam"<<endl;
    }
    
    float getter()
    {
        return fees;
    }
    void setter(float salary)
    {
        fees=salary;
    }
};
   int main()
   {
       tutorial t1;
       t1.years=20;
       t1.name="yash sir,bhavik sir(from kalyan)";
       t1.experience=12;
       
       t1.setter(30000.50);
       float salary=t1.getter();
       cout<<t1.years<<"th years of anniversy"<<endl;
       cout<<"prof"<<"-"<<t1.name<<endl;
       cout<<"prof have"<<" "<<t1.experience<<" "<<" years of experience"<<endl;
       cout<<"the fees of class"<<"-"<<salary<<endl;
       
       return 0;
   }
