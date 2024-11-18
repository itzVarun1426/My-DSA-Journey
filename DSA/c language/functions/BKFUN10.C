//to find value of x raised to y
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y;
	int power(int , int);
	int ans;

	clrscr();

	printf("\n Enter the number of base:-");
	scanf("%d",&x);

	printf("\n Enter the number of coefficient:-");
	scanf("%d",&y);

	ans=pow(x,y);
	printf("\n The %d raised to %d is %d ",x,y,ans);
getch();
}
int power(int x,int y)
{
	int res;
	res=pow(x,y);

	return res;
}