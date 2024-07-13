#include<iostream>
#include<math.h>
using namespace std;

class sciencecal
{ 
    public:
    double fun(double v)
    {
       double num1=v;
       double res;
       float pi=3.14159265;
       res= cos(num1*pi/180);
       return(res);
    }
    double run(double a)
    {
       double num2=a;
       double res;
       float pi=3.14159265;
       res= sin(num2*pi/180);
       return(res);
    }
    double can(double e)
    {
       double num3=e;
       double res;
       float pi=3.14159265;
       res= tan(num3*pi/180);
       return(res);
    }
};
int main()
{
    sciencecal s1;
    double v=30.7;
    double a=40.5;
    double e=20.4;
    double cosed=s1.fun(v);
    double sined=s1.run(a);
    double taned=s1.can(e);
    cout<<"The cosine of "<<v<<" degree is "<<cosed<<endl;
    cout<<"The sine of "<<a<<" degree is "<<sined<<endl;
    cout<<"The tan of "<<e<<" degree is "<<taned<<endl;
    return 0;
}
