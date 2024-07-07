#include<iostream>
#include<math.h>
#define PI 3.14159265
using namespace std;

class calculator
{
    public:
    // PI=3.14159265;
    double add(double a,double b)
      {
        double num1=a;
        double num2=b;
        double add;
       add=num1+num2;
    //   cout<<"ADD -"<<add<<endl;
       return(add);
      }
    double sub(double a,double b)
      {
        double num1=a;
        double num2=b;
        double sub;
        sub=num1-num2;
        return(sub);
       // cout<<"SUB -"<<sub<<endl;
      }
    double mul(double a,double b)
      {
        double num1=a;
        double num2=b;
         double mul;
        mul=num1*num2;
        return(mul);
       //cout<<"MUL-"<<mul<<endl;
      }
    double div(double a,double b)
      { 
        double num1=a;
        double num2=b;
        double div;
        div=num1/num2;
        return(div);
      // cout<<"DIV -"<<div<<endl;
      }
      double cos(double v)
      {
                double param, result;
         param = 60.0;
          result = cos ( param * PI / 180.0 );
         cout<<"the cosine of"<<param<<"is a"<<result<<endl;
        return result;
      }
};
  int main()
  {
      calculator c1;
      double a=5.2;
      double b=3.4;
      double v=30;
     // double result;
      double added = c1.add(a,b);
      double subtracted = c1.sub(a,b);
      double multipled = c1.mul(a,b);
      double division = c1.div(a,b);
      double cosed = c1.cos(v);
      
      cout<<added<<endl<<subtracted<<endl<<multipled<<endl<<division<<endl<<
      cosed<<endl;
      return 0;  
  }
