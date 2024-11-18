#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ename[20];
	int  perday,pday;
	float basic,hra,da,ta,netsal,ded;

	clrscr();

	printf("\n Enter the Name of the employee:-");
	gets(ename);

	printf("\n Enter the Present day:-");
	scanf("%d",&pday);

	printf("\n Enter the per day wages :-");
	scanf("%d",&perday);

	basic=perday*pday;
	hra=basic*15/100;
	da=basic*12/100;
	ta=basic*10/100;
	ded=basic*7/100;

	netsal=basic+hra+ta+da-ded;

	printf("\n The netsal of the %s employee is %f",ename,netsal);
	getch();
}