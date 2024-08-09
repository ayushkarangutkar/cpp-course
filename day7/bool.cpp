// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;
 bool check_even_odd();

int main()

{

bool c= check_even_odd();

if(c)



cout<<"number is an even ";

else

cout<<"number is a odd ";

 }

return 0;

 bool check_even_odd()

{

int num;

cout<<"enter number ";

cin>>num;


if(num%2==0)


return(true);

else

return(false);

}