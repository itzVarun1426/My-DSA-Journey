#include<stdio.h>
#include<conio.h>
void main()
{
	int num,no,digit,sum;
	clrscr();

	printf("\n Enter the number:-");
	scanf("%d",&no);

	num=no;
	sum=0;
	while(num>0)
		{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
		}
	printf("\n The count of digits of %d is %d.",no,sum);
getch();
}