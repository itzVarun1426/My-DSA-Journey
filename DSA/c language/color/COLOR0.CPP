#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,c;

	clrscr();

	y=10;
	textcolor(5);
	for(x=20;x<=60;x++)
		{
		gotoxy(x,y);
		cprintf("#");
		}

	y=20;
	textcolor(5);
	for(x=20;x<=60;x++)
		{
		gotoxy(x,y);
		cprintf("#");
		}

	x=20;
	textcolor(1);
	for(y=10;y<=20;y++)
		{
		gotoxy(x,y);
		cprintf("*");
		}

	x=60;
	for(y=20;y<=20;y++)
		{
		gotoxy(x,y);
		cprintf("*");
		}

	x=37;
	y=15;
	textcolor(4+BLINK);
	textbackground(11);
	gotoxy(x,y);
	cprintf("Varry");

	getch();
}
