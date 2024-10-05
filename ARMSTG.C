#include<stdio.h>
#include<conio.h>
void main()
{
	int num,no,digit,sum,dig;
	clrscr();

	printf("\n Enter the number to check Armstrong:-");
	scanf("%d",&no);
	num=no;
	dig=0;
	while(num>0)
		{
		dig=dig+1;
		num=num/10;
		}
	switch(dig)
	{
	case 3 :
		num=no;
		sum=0;
		while(num>0)
			{
			digit=num%10;
			sum+=(digit*digit*digit);
			num/=10;
			}
		printf("\n The number has %d digits.",dig);
		printf("\n The count of 3rd multiple digits of %d is %d.",no,sum);
		if(no==sum)
		{
			printf("\n The entered number is Armstrong.");
		}
		else
		{
			printf("\n The entered number is not Armstrong.");
		}
	break;
	case 4 :
		num=no;
		sum=0;
		while(num>0)
			{
			digit=num%10;
			sum+=(digit*digit*digit*digit);
			num/=10;
			}
		printf("\n The number has %d digits.",dig);
		printf("\n The count of 4rth multiple digits of %d is %d.",no,sum);
		if(no==sum)
		{
			printf("\n The entered number is Armstrong.");
		}
		else
		{
			printf("\n The entered number is not Armstrong.");
		}
	break;
	case 5 :
		num=no;
		sum=0;
		while(num>0)
			{
			digit=num%10;
			sum+=(digit*digit*digit*digit*digit);
			num/=10;
			}
		printf("\n The number has %d digits.",dig);
		printf("\n The count of 5th multiple digits of %d is %d.",no,sum);
		if(no==sum)
		{
			printf("\n The entered number is Armstrong.");
		}
		else
		{
			printf("\n The entered number is not Armstrong.");
		}
	break;
	}
getch();
}