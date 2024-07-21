#include<iostream>
using namespace std;

 class bus
 {
     private:
        float money;
    public:
        string name;
        int years;
     
    bus()
    {
        cout<<"the academy is very special";
    }
    ~bus()
    {
        cout<<"the special discout is on get ready for that";
    }
    float getter( )
    {
         return money;
    }
    void setter(float salary)
    {
        salary=money;
    }
    
    int add(int a,int b)
    {
        int num1=a;
        int num2=b;
        int add;
        add=num1+num2;
        return (add);
    }
    int  sub(int a,int b)
    {
        int num1=a;
        int num2=b;
        int sub;
        sub=num1-num2;
        return (sub);
    }
    
    class student 
    {
        public:
        int runs;
        int 
    }
 };
 
 int main()
 {
     bus b1;
     b1.name="academy";
     b1.years=23;
     
     b1.setter(3000.05);
     float salary=b1.getter();
     
     int a=10;
     int b=5;
     int added=b1.add(a,b);
     int subed=b1.sub(a,b);
     
     cout<<"the academy"<<b1.name<<"\n"<<"the years"<<b1.years<<"\n";
     cout<<"the money"<<salary<<endl;
     cout<<"the addition of two number"<<added<<"\n";
     cout<<"the subtraction of two number"<<subed<<endl;
     
     return 0;
 }
 
