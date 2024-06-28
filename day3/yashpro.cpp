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
    ~student()
    {
        cout<<"12 years of experience ,mast,phd in tharakiology"<<endl;
        cout<<"he created 1000 of thakari today and so on";
    }
};
int main() 
{
   student s1;
   s1.name="prof.yash";
   s1.age=35;
   s1.id=01;
   
   s1.setter(1);
   float aukaat=s1.getter();
   
   cout<<"nalayka name"<<" - "<<s1.name<<"(best tharakiana prize in 2024)"<<endl;
   cout<<"aukaat"<<" - "<<s1.age<<"years"<<endl;
   cout<<"apani pechana"<<" - "<<s1.id<<endl;
   cout<<"diploma in co(batch - barbaad )"<<" - "<<aukaat<<endl;
  
    return 0;
}
