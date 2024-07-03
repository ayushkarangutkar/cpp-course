#include<iostream>
#include<string>
using namespace std;

class academy
{
    public:
    string name;
    int age;
    int card;
    
    academy()
    {
        cout<<"the academy is very excellent"<<endl;
    }
    ~academy()
    {
        cout<<"the academy is started soon";
    }
}; 
   int main()
   {
       academy a1;
       a1.name="sion";
       a1.age=34;
       a1.card=45;
       
       cout<<"name - "<<a1.name<<endl<<"years -"<<a1.age<<endl<<"code -"<<a1.card<<endl;
       return 0;
   }
