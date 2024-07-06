#include<iostream>
#include<math.h>
using namespace std;

class calculator
{
    public:
    double add(double a,double b)
    {
        double add;
        cout<<"enter two value";
        cin>>a>>b;
        add=a+b;
        cout<<"ADD -"<<add<<endl;
    }
        double sub(double a,double b)
    {
        double sub;
        cout<<"enter two value";
        cin>>a>>b;
        sub=a-b;
        cout<<"SUB -"<<sub;
    }
        double mul(double a,double b)
    {
        double mul;
        cout<<"enter two value";
        cin>>a>>b;
        mul=a*b;
        cout<<"mul -"<<mul;
    }
    void choice()
    {
        double add,sub,mul;
        int choice;
        cout<<"1.add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl;
        cout<<"Enter the choice";
        cin>>choice;
    }
}; 
int main()
{
    calculator c1;
    double a;
    double b;
    c1.choice();
    c1.add(a,b);
    c1.sub(a,b);
    c1.mul(a,b);
    return 0;
}
