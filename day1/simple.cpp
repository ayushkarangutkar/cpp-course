#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<" enter name "<<endl;
    cin>>name;
    cout<<" hello "<<name<<" welcome in the world of c++";
    cout<<"\n";
    
    int a,b;
    cout<<" enter number "<<endl;
    cout<<" a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<a<<b<<endl;
    
    int num1,num2;
    int add,sub,mul,division;
    cout<<" num1 = ";
    cin>>num1;
    cout<<" num2 =";
    cin>>num2;
    
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    division=num1/num2;

    cout<<" the addition of two number "<<add<<endl;
    cout<<" the subtraction of two number "<<sub<<endl;
    cout<<" the multiplication of two number "<<mul<<endl;
    cout<<" the division of two number"<<division<<endl;
     
    float p,t,r,SI;
    cout<<" enter PTR number "<<endl;
    cout<<"P = ";
    cin>>p;
    cout<<"T = ";
    cin>>t;
    cout<<"R = ";
    cin>>r;
    SI=(p*t*r)/100;
    cout<<"the interest of this is "<<SI<<endl;
    
    float num,sqr;
    cout<<" enter number "<<endl;
    cin>>num;
    sqr=num*num;
    cout<<" the sqrt of this number is "<<sqr<<endl;
    
    char m,n;
    cout<<" enter uppercase character ";
    cin>>m;
    n=m+32;
    cout<<" the uppercase character is "<<n<<endl;
    return 0;
}
