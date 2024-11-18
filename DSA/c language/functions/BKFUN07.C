//to find reverse of number
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,ans;
	int rev(int);

	clrscr();
	printf("\n Enter the number to find reverse:-");
	scanf("%d",&num);

 //	ans=rev(num);

	printf("\n Reverse of the number %d is %d .",num,rev(num));

	getch();
}
int rev(int num)
{
	int dig,rev,no;
	no=num;
	rev=0;

	while(no>0)
	{
		dig=no%10;
		rev=rev*10+dig;
		no=no/10;
	}
	return rev;
}
