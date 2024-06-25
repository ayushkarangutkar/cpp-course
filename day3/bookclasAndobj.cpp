#include<iostream>
using namespace std;

class book
{
    public:
    string name;
    float price;
    int pages;
};

int main()
{ 
    int name,price,pages;
    book b1;
    b1.name="athrava";
    b1.price=500.80;
    b1.pages=200;
    
    book b2;
    b2.name="physics";
    b2.price=400.50;
    b2.pages=300;
    
    cout<<"name"<<"-"<<b1.name<<" ,"<<b2.name<<endl;
    cout<<"price"<<"-"<<b1.price<<", "<<b2.price<<endl;
    cout<<"pages"<<"-"<<b1.pages<<", "<<b2.pages<<endl;
    
    void best();
    {
        cout<<"the athrava book is best"<<"/ "<<"the physcis book is greatest";
    }
    return 0;
}
    
    
