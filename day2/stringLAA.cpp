#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int len;
    string a,b;
    a="abcd";
    b="ef";
    len=a.size(),b.size();
    cout<<a.size()<<" "<<b.size()<<endl;
    
    string c;
    c=a+b;
    cout<<c<<endl;
    
    string s="abcd";
    char c0=s[0];
    char c1=s[1];
    char c2=s[2];
    char c3=s[3];
    
    s[0]='e';
    cout<<s<<" ";
    
    string d="ef";
    char z0=d[0];
    char z1=d[1];
    
     d[0]='a';
     cout<<d;
  
    return 0;
}
