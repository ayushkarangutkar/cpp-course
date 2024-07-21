#include<iostream>
using namespace std;

class car
{
    public:
    string name;
    int age ;
    float perc;
};

int main()
{
    car c1;
    c1.name="purva madam";
    c1.age=45;
    c1.perc=81.18;
    
    cout<<c1.name<<endl<<c1.age<<endl<<c1.perc<<endl;
    return 0;
}
