//to find sum of the digits in number
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,ans;
	int sum(int);

	clrscr();
	printf("\n Enter the number:-");
	scanf("%d",&num);

 //	ans=sum(num);

	printf("\n Sum of digits of the number %d is %d .",num,sum(num));

	getch();
}
int sum(int num)
{
	int dig,sum,no;
	no=num;
	sum=0;

	while(no>0)
	{
		dig=no%10;
		sum=sum+dig;
		no=no/10;
	}
	return sum;
}
