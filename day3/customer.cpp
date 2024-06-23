#include<iostream>
#include<string>
using namespace std;

int age;
int number;

class customer{
private:
    float balance;
    int password;
public:
    string name;
    int accoutNumber;

    float getterBalance()
    {
        return balance;
    }

    void setterBalance(float money)
    {
        balance=money;
    }
};

int main()
{
    customer c1;
    c1.name="kumar";
    c1.accoutNumber=123;

    c1.setterBalance(3000.50);
    float mon=c1.getterBalance();
    cout<<mon;
    // cout<<c1.name<<c1.accout number;
    return 0;
}