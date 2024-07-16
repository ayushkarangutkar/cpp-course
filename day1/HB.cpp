#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main() 
{
  char   s[10];
  clrscr();
  int i;
  printf("Enter name");
  gets(s);
  for(i=0;i<30;i++)
  {
      textcolor(i);
      cprintf("Happy birthday from A.K to %s\2\n",s);
      delay(200);
  }
  return 0;
}
