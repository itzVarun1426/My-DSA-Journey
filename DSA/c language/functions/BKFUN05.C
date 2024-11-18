//to find greatest common divisor(GCD)
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	int gcd(int ,int);
	int ans;

	clrscr();

	printf("\n Enter the number :-");
	scanf("%d",&x);

	printf("\n Enter the number :-");
	scanf("%d",&y);

	ans=gcd(x,y);

	printf("\n GCD of %d & %d is %d ",x,y,ans);
	getch();
}
int gcd(int x,int y)
{
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	}
	return x;
}
