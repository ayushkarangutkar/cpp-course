#include<iostream>
using namespace std;

int Max =10;
struct stack
{
    int arr[10];
    int top;
};
void start(struct stack *s)
{
    s->top= -1;
}
bool isFull(struct stack *s )
{
    if(Max<=top)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}
bool isEmpty(struct stack *s)
{
    if(max>=top)
    {
        cout<<true;
    }
    else 
    {
        cout<<false;
    }
}
void push(struct stack *s, int val)
    {
      int a=val;
    }
void pop()
    {
        
    }
void peek()
    {
    
    }
void overflow()
    {
    
    }
void underflow()
    {
    
    }
int main()
{
    struct stack *s;
}