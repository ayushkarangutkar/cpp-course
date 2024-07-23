#include<iostream>
#include<string>
using namespace std;

 class bus
 {
     private:
        float money;
    public:
        string name;
        int years;
     
    bus()
    {
        cout<<"the academy is very special"<<endl;
    }
    ~bus()
    {
        cout<<"the special discout is on get ready for that"<<endl;
    }
    float getter( )
    {
         return money;
    }
    void setter(float salary)
    {
        salary=money;
    }
    
    int add(int a,int b)
    {
        int num1=a;
        int num2=b;
        int add;
        add=num1+num2;
        return (add);
    }
    int  sub(int a,int b)
    {
        int num1=a;
        int num2=b;
        int sub;
        sub=num1-num2;
        return (sub);
    }
     void fun(int a)
     {
         cout<<"the academy is great"<<endl;
     }
     void fun()
     {
         cout<<"the academy is very great";
     }
     
     void swap(int a,int b)
     {
      int c=a;
      a=b;
      b=c;
      cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
     }
     void reverse(int a)
     {
       int reverse,num,digit,n;
       num=a;
       n=num;
       reverse=0;
        while(num!=0)
     {
      digit=num%10;
      reverse=reverse*10+digit;
      num=num/10;
     }
      cout<<"\n The reverse number is - "<<reverse<<endl;
     }
     void large(int b)
     {
     int i=b;
     int array[5]={1,34,45,7,8};
     int large = array[0];
     for(i=1;i<5;i++)
    {
    if(large<array[i]){
        large=array[i];
    }
    }
   cout<<"the largest number from this is - "<<large<<endl;
     }
 };
 
 int main()
 {
     bus b1;
     b1.name="aryan";
     b1.years=23;
     
     bus b2;
     b2.name="soham";
     b2.years=34;
     
     b1.setter(3000.05);
     float salary=b1.getter();
     
     int a=10;
     int b=5;
     int added=b1.add(a,b);
     int subed=b1.sub(a,b);

     b1.fun(3);
     b1.swap(5,7);
     b1.reverse(1234);
     b1.large(1);
     
     cout<<"the academy 1 - "<<b1.name<<"\n"<<"the years - "<<b1.years<<"\n";
     cout<<"the academy 2 - "<<b2.name<<"\n"<<"the years - "<<b2.years<<"\n";
     cout<<"the money - "<<salary<<endl;
     cout<<"the addition of two number - "<<added<<"\n";
     cout<<"the subtraction of two number - "<<subed<<endl;
     
     return 0;
 }
 
