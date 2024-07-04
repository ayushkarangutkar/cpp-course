#include<iostream>
#include<math.h>
using namespace std;

class calculator
{
    public:
    void cal()
    {
        int num1,num2,result;
        char ch;
        cout<<"enter the number"<<endl;
        cout<<"num1 = ";
        cin>>num1;
        cout<<"num2 = ";
        cin>>num2;
        cout<<'+'<<" "<<'-'<<" "<<'*'<<" "<<'/'<<endl;
        cout<<"Enter choice";
        cin>>ch;
        if(ch=='+')
        {
            result=num1+num2;
            cout<<num1<<" "<<'+'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='-')
        {
            result=num1-num2;
            cout<<num1<<" "<<'-'<<" "<<num2<<" = "<<result<<endl;

        }
        else if(ch=='*')
        {
            result=num1*num2;
            cout<<num1<<" "<<'*'<<" "<<num2<<" = "<<result<<endl;
        }
        else if(ch=='/')
        {
            result=num1/num2;
            cout<<num1<<" "<<'/'<<" "<<num2<<" = "<<result<<endl;
        }
        else
        {
            cout<<"wrong choice";
        }
    }
};  
    int main()
    {
        calculator c1;
        c1.cal();
        return 0;
    }
