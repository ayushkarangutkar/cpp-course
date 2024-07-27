// Online C++ compiler to run C++ program online
#include <iostream>
#define MAX_SIZE 100
using namespace std;

struct stack 
{
    int items[MAX_SIZE];
    int top;
};

void initialise(struct stack *s)
{
    s->top=-1;
}
int isEmpty(struct stack *s)
{
   return s->top==-1;
}
int isFull(struct stack *s)
{
  return  s->top==MAX_SIZE -1;
}
void push(struct stack *s,int value)
{
    if(isFull(s))
    {
        cout<<"stack overflow ";
        return ;
    }
    s->items[++s->top]=value;
}
int pop(struct stack *s)
{
    if(isEmpty(s))
    {
        cout<<"stack underflow";
        return -1;
    }
  return   s->items[s->top--];
}
int peek(struct stack *s)
{
    cout<<"stack is empty "
    return -1;
}
return s->items[s->top];
 }
 
 int main()
 {
     struct stack *s
     initialise(&s);
     
     push(&s,10);
     push(&s,20);
     push(&s,30);
     push(&s,40);
     push(&s,50);
     push(&s,60);
     push(&s,70);
     push(&s,80);
     push(&s,90);
     push(&s,100);
     
     int poppedarray[MAX_SIZE];
     int poppedindex=0;
    
    while(!isEmpty(&s))
    {
        int poppedelement = pop(&s);
        int poppedarray[poppedindex++];
    }
    
    for(int i = poppedindex - 1;i>=0;i--)
    {
        cout<<poppedarray[i];
    }
    cout<<"\n";
 return 0;
 }
