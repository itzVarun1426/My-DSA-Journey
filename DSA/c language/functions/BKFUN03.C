//print factorial of number from one to ten
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	long ans;
	long facto(int num);

	clrscr();

	for(num=1;num<=10;num++)
	{
		ans=facto(num);
		printf("\n %10d! = %10ld",num,ans);
	}
	getch();
}
long facto(int num)
{
	long ans;
	int c;
	ans=1;

	for(c=1;c<=num;c++)
	{
		ans=ans*c;
	}
	return ans;
}