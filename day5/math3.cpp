#include<iostream>
#include<math.h>
using namespace std;

class calthird
{
    public:
    double dan(double a)
    {
        double num1=a;
        double res;
        res= pow(num1,3.0);
        return (res);
    }
    double sun(double r)
    {
        double num2=r;
        double res;
        res= sqrt(r);
        return (res);
    }
    double lan(double f)
    {
        double num3=f;
        double res;
        res= ceil(f);
        return (res);
    }
    double ran(double )
};
int main()
{
    calthird c1;
    double a=3.0;
    double r=4.8;
    double f=3.4;
    double powed=c1.dan(a);
    double sqrted=c1.sun(r);
    double celed=c1.lan(f);
    cout<<" The power of "<<3.0<<" raise to "<<3.0<<" is "<<powed<<endl;
    cout<<" The sqrt of "<<"("<<r<<")"<<" is "<<sqrted<<endl;
     cout<<" The ceil of "<<"("<<f<<")"<<" is "<<celed<<endl;

}
