// C++ program to implement 
#include <iostream>
#include <math.h>
using namespace std;
 
// Class calculator 
class Calculator
{
   float a, b;
public:   
    // Function to take input
    // from user
    void result() 
    {
        cout << "Enter First Number: "<<endl;
        cout<<" num1 = ";
        cin >> a;
        cout << "Enter Second Number: " <<endl;
        cout<<" num2 = ";
        cin >> b;
    }
   
    // Function to add two numbers
    float add() 
    {
        return a + b;
    }
   
    // Function to subtract two numbers
    float sub() 
    {
        return a - b;
    }
   
    // Function to multiply two numbers
    float mul() 
    {
        return a * b;
    }
   
    // Function to divide two numbers
    float div() 
    {
        if (b == 0) 
        {
            cout << "Division By Zero" << 
                     endl;
            return INFINITY;
        }
        else
        {
            return a / b;
        }
    }
};

int main() 
{
    int ch;
    Calculator c; 
    cout << "Enter 1 for + " << 
            "\nEnter 2 for - " << 
            "\nEnter 3 for * " << 
            "\nEnter 4 for \ " << 
            "\nEnter 0 for getout";
         
    do
    {
        cout << "\nEnter Choice: ";
        cin >> ch;
        switch (ch)
        {
         
        case 1:
            // result function invoked
            c.result();     
            // add function to calculate sum
            cout <<num1<< " + "<<num2<<" = "<<
                     c.add() << endl; 
            break;
         
        case 2:             
            // sub function to calculate 
            // difference
            c.result();
            cout <<num1<< " -  "<<num2<<" = "<<
                     c.sub() << endl; 
            break;
         
        case 3:
            c.result();            
            // mul function to calculate product
            cout <<num1<< " * "<<num2<<" = "<<
                     c.mul() << endl; 
            break;
         
        case 4:
            c.result();             
            // div function to calculate division
             cout <<num1<< " \ "<<num2<<" = "<< 
                     c.div() << endl; 
            break;
        }
         
    } while (ch >= 1 && ch <= 4);
     
    return 0;
}
