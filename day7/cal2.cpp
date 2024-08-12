#include<iostream>
#include<math.h>               
#include<string>
using namespace std;

//In this class calculator 
class calculator
{
    public:

    // Function to take input
    // from user
    void cal()
    {
        int num1,num2,result;
        char ch;
        cout<<"enter the operators - "<<endl;
        cout<<'+'<<"  "<<'-'<<"  "<<'*'<<"  "<<'/'<<"   "<<'%'<<endl;
        cout<<"\n";
        
        cout<<"enter the number"<<endl;
        cout<<"num 1 = ";
        cin>>num1;
        cout<<"opertor :- ";
        cin>>ch;
        cout<<"num 2 = ";
        cin>>num2;
        cout<<"\n";
        
        if(ch=='+')
        {
           //This is addition 
            cout<<"result :- "<<endl;
            result=num1+num2;
            cout<<num1<<" "<<'+'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='-')
        {
          //This is subtraction 
            cout<<"result : - "<<endl;
            result=num1-num2;
            cout<<num1<<" "<<'-'<<" "<<num2<<" = "<<result<<endl;

        }
        else if(ch=='*')
        {
          //This is multiply 
            cout<<"result :-  "<<endl;
            result=num1*num2;
            cout<<num1<<" "<<'*'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='/')
        {
         //This is division 
            cout<<"result :- "<<endl;
            result=num1/num2;
            cout<<num1<<" "<<'/'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch == '%')
        {
        //This is modulus 
            cout<<"result :- "<<endl;
            result=num1%num2;
            cout<<num1<<" % "<<num2<<" = "<<result
            <<endl;
        }
    }
};  
    int main()
    { 
        //Here we use do while loop
        //user input
 
        char x;
        do
        {
        calculator c1;
        c1.cal();
        cout<<" \n enter N to exit or Y to continue :- ";
        cin>>(x);
        }
        while(x !='n');
    }

   // Here is the end of this code//