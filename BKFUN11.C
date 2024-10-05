#include<stdio.h>
#include<conio.h>
int leap(int year)
{
	int rem;
	rem=year%4;
	return rem;
}
int main()
{
	int year;
	int ans;

	// clrscr();

	printf("\n Enter the year to check:-");
	scanf("%d",&year);

	ans=leap(year);

	if(ans==0)
	{
		printf("\n The %d is leap year .",year);
	}
	else
	{
		printf("\n The %d is not leap year .",year);
	}
	getch();
}

