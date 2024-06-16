#include<iostream>
using namespace std;

struct student
{
  int id;
  string name;
  float percentage;
};

int main()
{
    struct student ayush;
    ayush.id=23;
    ayush.percentage=78.40;

    struct student jai;
    jai.id=45;
     jai.percentage=65.30;

     cout<<ayush.id;
}