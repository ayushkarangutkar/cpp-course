// Online C compiler to run C program online
#include <iostream>
#include<string>
using namespace std;

class student
{
    private:
    float perc;
    public:
    string name;
    int age;
    int id;
    
    float getter()
    {
        return perc;
    }
    void setter(float aukaat)
    {
        perc=aukaat;
    }
};
int main() 
{
   student s1;
   s1.name="ayush";
   s1.age=17;
   s1.id=1102;
   
   s1.setter(79.5);
   float aukaat=s1.getter();
   
   cout<<"nalayka name"<<" - "<<s1.name<<endl;
   cout<<"umara"<<" - "<<s1.age<<endl;
   cout<<"apani pechana"<<" - "<<s1.id<<endl;
   cout<<"aukaat"<<" - "<<aukaat<<endl;

    return 0;
}
