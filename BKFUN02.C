//to find factorial of number
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,ans;
	int facto(int num);

	clrscr();
	printf("\n Enter the number to find factorial :-");
	scanf("%d",&num);

	ans=facto(num);

	printf("\n Factorial of the %d is %d",num,ans);

	getch();
}
int facto(int num)
{
	int ans;
	int c;

	ans=1;
	for(c=1;c<=num;c++)
	{
		ans=ans*c;
	}
	return ans;
}