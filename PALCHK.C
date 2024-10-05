#include<stdio.h>
#include<conio.h>
void main()
{
	int num,no,digit,rev;
	clrscr();

	printf("\n Enter the number:-");
	scanf("%d",&no);

	num=no;
	rev=0;
	while(num>0)
		{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
		}
	printf("\n The reverse of number %d is %d.",no,rev);
	if(no==rev)
	{
		printf("\n The given number is palindrome.");
	}
	else
	{
		printf("\n\n The given number is not palindrome.");
	}
getch();
}