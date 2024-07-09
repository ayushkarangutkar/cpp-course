#include<iostream>
#include<math.h>
using namespace std;

class calsec
{
    public:
    double fan(double a)
    {
        double num1=a;
        double res;
        res=exp(a);
        return (res);
    }
     double han(double w)
    {
        double num2=w;
        double res;
        res=log(w);
        return (res);
    }
};
int main()
{
    calsec c1;
    double a=30.0;
    double w=25.5;
    double exped=c1.fan(a);
    double lged=c1.han(w);
    cout<<"The exponential value of "<<a<<" is "<<exped<<endl;
    cout<<"The log"<<"("<<w<<")"<<" is "<<lged<<endl;
    return 0;
}
