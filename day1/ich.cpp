#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main( )
{
	int i;
	clrscr();
	for(i=0;i<30;i++)
	{
	textbackground(WHITE);
	textcolor(i);
	cprintf("ICH LIEBE DICH ");
	delay(200);
	}
	getch( );
}