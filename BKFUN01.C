//to find addition of number
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,ans;
	int addnum(int,int);

	clrscr();

	printf("\n Enter the no :-");
	scanf("%d",&no1);

	printf("\n Enter the no :-");
	scanf("%d",&no2);

	ans=addnum(no1,no2);

	printf("\n Addition of %d & %d is %d",no1,no2,ans);
	getch();
}
int addnum(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
}
