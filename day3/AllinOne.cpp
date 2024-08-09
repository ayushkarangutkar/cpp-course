#include<iostream>
#include<string>
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
        cout<<"             YASH ACADEMY                "<<endl;
        cout<<" by yash sir "<<endl;
        cout<<"To solve any problem in code in just  one milisecond  download YASH ACADEMY "<<endl;
    }
    ~tutorial()
    {
        cout<<" first 20 student gets special discount"<<endl;
        cout<<"here we provide best things from all over world"<<endl;
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
       t1.name="yash sir(marie gold medalist)";
       t1.experience=12;
       
       t1.setter(1);
       float salary=t1.getter();
       cout<<t1.years<<"th years of anniversy of academy"<<endl;
       cout<<"\n";
       cout<<" profs - "<<endl;
       cout<<t1.name<<endl;
       cout<<"bhavik sir(2nd in maria competition )"<<endl<<"ayush sir(disquiflied from maria competition) "<<endl;
       cout<<"\n";
       cout<<"profs have"<<" "<<t1.experience<<" "<<" years of experience"<<endl;
       cout<<"the fees of class"<<"-"<<salary<<" bhau cha vada pav/per person"<<endl;
       cout<<"\n";
       
       return 0;
   }
