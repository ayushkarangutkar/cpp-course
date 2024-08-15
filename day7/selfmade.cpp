#include<iostream>
#include<math.h>
#include<string>
using namespace std;     

class calculator
{
    public:
    calculator()
    {
        cout<<"THE DIGITAL CALCULATOR"<<endl;
    }
    void fun(int n)
    {
        int d=n;
        int a,b,c,choice;
        
        cout<<"1.ADD"<<endl<<"2.SUB"<<endl<<"3.MUL"<<endl<<"4.DIV"<<endl;
        cout<<"Enter the opertor as per number"<<endl;
        cout<<"choice = ";
        cin>>choice;
        cout<<"Enter the  value"<<endl;
        cout<<"num1 = ";
        cin>>a;
        cout<<"num2 = ";
        cin>>b;
        switch(choice)
        {
            case 1 : c=a+b;
                    cout<<a<<" + "<<b<<" = "<<c<<endl;
                    break;
            case 2: c=a-b;
                    cout<<a<<" - "<<b<<" = "<<c<<endl;
                    break;
            case 3 :c=a*b;
                    cout<<a<<" * "<<b<<" = "<<c<<endl;
                    break;
            case 4:c=a/b;
                    cout<<a<<" - "<<b<<" = "<<c<<endl;
                    break;
            default:cout<<"Wrong choice"<<endl;
        }
    }
        void run(string r)
        {
            string e=r;
            float num,res;
            int want;
            float pi=3.14159265;
            
            cout<<"1.sqrt"<<endl<<"2.sin"<<endl<<"3.cos"<<endl<<"4.tan"<<endl;
            cout<<"enter the operator as per number"<<endl;
            cout<<"choice = "<<endl;
            cin>>want;
            cout<<"enter number "<<endl;
            cout<<"num = ";
            cin>>num;
            
            switch(want)
            {
                case 1 :res=num*num;
                       cout<<num<< " * "<<num<<" = "<<res<<endl;
                       break;
                case 2:res= sin(num*pi/180);
                      cout<<" the sine of "<<num<<" degree is "<<res<<endl;
                      break;
                case 3:res= cos(num*pi/180);
                      cout<<" the cose of "<<num<<" degree is "<<res<<endl;
                      break;
                case 4:res= tan(num*pi/180);
                      cout<<"the tane of "<<num<<" degree is "<<res<<endl;
                      break;
                default:cout<<" wrong choice "<<endl;
            }
        }
};
    int main()
    {
        calculator c1;
        string  r;
        int n;
        string a;
        char d;
        cout<<" enter number or name "<<endl;
        cin>>a;
      do
      {
         if(a!="max")
          {
         cout<<" The number :- ";
         cin>>n;
         c1.fun(n);
          }
         else 
           {
         cout<<" The name :- ";
         cin>>r;
         c1.run(r);
           }
        cout<<"\nEnter N to exit or Y to enter : \n ";
        cin>>d;
      } while(d!='n');
    }
