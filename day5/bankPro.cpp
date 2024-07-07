#include<iostream>
#include<string>
using namespace std;

class Accout
   {
    private:
        float balance;
        long accout;
    public:
        float getBalance()
        {
            return balance;
        }
        long getAccout()
        {
            return accout;
        }
        void deposit(float money)
        {
            balance=balance+money;
        }
        bool withdraw(float out)
        {
            if(balance>=out)
              {
              balance=balance-out;
              return true;
              }
              else
              {
                  return false;
              }
        }
   };
class Customer
  {
    private:
        string customerdetails;
    public:
         string name;
         int age;
    string getCustomerdetails()
    {
        return customerdetails;
    }
    void setCustomerdetails(string info)
    {
        info=customerdetails;
    }
  };
class Bank
  {
    public:
        int check;
        int passbook;
        bank()
        {
            cout"the bank accout created"<<endl;
        }
  };
int main()
{
    
}