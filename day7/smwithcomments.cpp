/* C++ program or code on calculator */
#include<iostream>
#include<math.h>
#include<string>

using namespace std;     

class calculator
{
    public:
    //The constructer 
    calculator()
    {
        cout<<"+ - * % THE DIGITAL CALCULATOR % * - + "<<endl;
    }

    //This is functions 1  take input
    //from user
    void part1(int n)   //the argument pass here
    {
        //declaration of variables
        int d=n;
        int a,b,c,choice;
        
        cout<<"1.ADD"<<"  "<<"2.SUB"<<endl<<"3.MUL"<<"  "<<"4.DIV"<<endl;
        cout<<"Enter the opertor as per number"<<endl;
        cout<<"choice = ";
        cin>>choice;
        cout<<"Enter the  value"<<endl;
        cout<<"num1 = ";
        cin>>a;
        cout<<"num2 = ";
        cin>>b;
        
        //The switch case is used 
        switch(choice)
        {   
            //This case for add
            case 1 : c=a+b;
                    cout<<a<<" + "<<b<<" = "<<c<<endl;
                    break;
            //This case for subtract 
            case 2: c=a-b;
                    cout<<a<<" - "<<b<<" = "<<c<<endl;
                    break;
            //This case for multiply
            case 3 :c=a*b;
                    cout<<a<<" * "<<b<<" = "<<c<<endl;
                    break;
            //This case for divide 
            case 4:c=a/b;
                    cout<<a<<" / "<<b<<" = "<<c<<endl;
                    break;
            default:cout<<"Wrong choice"<<endl;
        }
    }
    
        //This function 2 take input 
        //from user
        void part2(string r)   //The argument pass here
        {
            //decalaration of variables 
            string e=r;
            float num,res;
            int want;
            float pi=3.14159265;
            
            cout<<"1.sqrt"<<"  "<<"2.sin"<<endl<<"3.cos"<<"   "<<"4.tan"<<endl;
            cout<<"enter the operator as per number"<<endl;
            cout<<"choice = "<<endl;
            cin>>want;
            cout<<"enter number "<<endl;
            cout<<"num = ";
            cin>>num;
            
            //The switch case is used
            switch(want)
            {
                //This case for sqrt 
                case 1 :res=num*num;
                       cout<<num<< " * "<<num<<" = "<<res<<endl;
                       break;
                //This case for sin
                case 2:res= sin(num*pi/180);
                      cout<<" the sine of "<<num<<" degree is "<<res<<endl;
                      break;
                //This case for cos 
                case 3:res= cos(num*pi/180);
                      cout<<" the cose of "<<num<<" degree is "<<res<<endl;
                      break;
                //This case for tan 
                case 4:res= tan(num*pi/180);
                      cout<<"the tane of "<<num<<" degree is "<<res<<endl;
                      break;
                default:cout<<" wrong choice "<<endl;
            }
        }
};
    int main()
    {
        //The object c1 is decalared
        calculator c1;
      
        //decalaration of variables 
        string  r;
        int n;
        string o;
        char d; 
        cout<<"\n";
        cout<<" enter number or name "<<endl;
        cin>>o;
        
        //The do while condition is used
      do
      { 
          //MadebyAyushk
        //If-else condition is used
         if(o!="purvamadam")
          {
         cout<<"The password number :- ";
         cin>>n;
         c1.part1(n);
          }
         else 
           {
         cout<<" The password name :- ";
         cin>>r;
         c1.part2(r);
           }
        cout<<"\nEnter N to exit or Y to enter : \n ";
        cin>>d;
        cout<<"\n";
      } while(d!='n');
    }
