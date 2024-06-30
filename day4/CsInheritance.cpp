#include<iostream>
using namespace std;

class sam
{
    public:
        string name;
        int age;
        
        sam()
        {
            cout<<"the topper of navjeevan of co"<<endl;
        }
        ~sam()
        {
            cout<<"congratulation to you";
        }
};
class soham:public sam
{
    public:
    int id;
    int rollNo;
    
    soham()
    {
        cout<<"the stand of talent"<<endl;
    }
    ~soham()
    {
        cout<<"the all things of navjeevan"<<endl;
    }
};

int main()
{
   soham s1;
   s1.name="aryan";
   s1.age=56;
   s1.id=4587;
   s1.rollNo=1414;
   
   cout<<s1.name<<endl<<s1.age<<endl<<s1.id<<endl<<s1.rollNo<<endl;
   return 0;
}
