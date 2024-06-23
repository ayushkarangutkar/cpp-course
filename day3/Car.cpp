#include<iostream>
#include<string>
using namespace std;

class car
{
private:
public:
  string name;
  int model; 
   float price;
  int number;

  void hello()
  {
    cout<<9;
  }
};

int main()
{
  car c1;
  c1.name="ravi";
  c1.model=14;
  c1.price=1200.00;
  c1.number=1456;

  car c2;
  c2.name="shivam";
  c2.model=15;
  c2.price=1400.00;
  c2.number=1278;

  car c3;
  c3.name="soham";
  c3.model=15;
  c3.price=1500.00;
  c3.number=1498;

  cout<<c1.name<<endl;
  cout<<c1.model<<endl;
  cout<<c1.price<<endl;
  cout<<c1.number<<endl;

hello();
  return 0;
  
}