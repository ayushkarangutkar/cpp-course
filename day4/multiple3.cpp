#include<iostream>
using namespace std;

class tesla 
{
    public:
    string model;
    int price;
    
    tesla()
    {
     cout<<"this is the best car in the world"<<endl;   
    }
};
class tata
{ 
    public:
    int years;
    int rate;
    
    tata()
    {
        cout<<"this is also a"<<endl;
    }
};
class soham : public tesla , public tata
{
    public:
    int parts;
    soham ()
    {
        cout<<"this is not a car "<<endl;
    }
};
int main()
{
    soham s1();
    s1.model="newa";
    s1.years=12;
    s1.rate=34000;
    s1.parts=5;
    
    cout<<s1.model<<endl<<s1.years<<endl<<s1.rate<<endl<<s1.parts<<endl;
    return 0;
}
