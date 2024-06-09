#include<iostream>
using namespace  std;
int main()
{
    int row ,column ;
    for( row=1;row<5;row++ )
    {
        for(col=row,row>col,col++)
        { 
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
}