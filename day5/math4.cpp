#include<iostream>
#include<math.h>
using namespace std;

class calfour
{
    public:
    int fun(int a)
    {
        int  num1=a;
        int cbrt;
        cbrt=num1*num1*num1;
        return (cbrt);
    }
    double ran(double b)
    {
        double num2=b;
        double fmax;
        fmax=(num2,1.0);
        return (fmax);
    }
    char gan(char k)
    {
        char m=k;
        char n;
        n=m+32;
        return (n);
    }
};
int main()
{
    calfour c1;
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    int cbrted=c1.fun(a);
    cout<<"The cube root of"<<a<<" is "<<cbrted<<endl;
    double b;
    cout<<"Enter the number"<<endl;
    cin>>b;
    double fmaxed=c1.ran(b);
    cout<<"The fmax is "<<b<<" is "<<fmaxed<<endl;
    char k;
    cout<<"Enter the character "<<endl;
    cin>>k;
    char ked=c1.gan(k);
    cout<<"The uppercase character of"<<k<<" is "<<ked<<endl;
}
