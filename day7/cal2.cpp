#include<iostream>
#include<math.h>               
#include<string>
using namespace std;

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
            cout<<"result :- "<<endl;
            result=num1+num2;
            cout<<num1<<" "<<'+'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='-')
        {
            cout<<"result : - "<<endl;
            result=num1-num2;
            cout<<num1<<" "<<'-'<<" "<<num2<<" = "<<result<<endl;

        }
        else if(ch=='*')
        {
            cout<<"result :-  "<<endl;
            result=num1*num2;
            cout<<num1<<" "<<'*'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='/')
        {
            cout<<"result :- "<<endl;
            result=num1/num2;
            cout<<num1<<" "<<'/'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch == '%')
        {
            cout<<"result :- "<<endl;
            result=num1%num2;
            cout<<num1<<" % "<<num2<<" = "<<result
            <<endl;
        }
    }
};  
    int main()
    { 
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