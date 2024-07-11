#include<iostream>
#include<math.h>
using namespace std;

class point 
{
    public:
    double add(double a,double b)
    {
        double num1=a;
        double num2=b;
        double *ps,*pd;
        ps=&num1;
        pd=&num2;
        double sum;
        sum=*ps+*pd;
        return (sum);
    }
    double sub(double a,double b)
    {
        double num1=a;
        double num2=b;
        double *pw,*pe;
        pw=&num1;
        pe=&num2;
        double sum;
        sum=*pw-*pe;
        return (sum);
    }
};
int main()
{
    point p1;
    double a;
    double b;
    cout<<"Enter the value of two number"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;
    double added=p1.add(a,b);
    double subed=p1.sub(a,b);
    cout<<" Addition of two number "<<added<<endl;
    cout<<" subtraction of two number "<<subed<<endl;
    return 0;
}
