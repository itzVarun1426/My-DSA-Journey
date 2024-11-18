//to find lowest common multiple(LCM)
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	int lcm(int ,int);
	int ans;

	clrscr();

	printf("\n Enter the number :-");
	scanf("%d",&x);

	printf("\n Enter the number :-");
	scanf("%d",&y);

	ans=lcm(x,y);

	printf("\n LCM of %d & %d is %d ",x,y,ans);
	getch();
}
int lcm(int x,int y)
{
	int mx,mn,lar;
	if(x>y)
	{
		mx=lar=x;
		mn=y;
	}
	else
	{
		mx=lar=y;
		mn=x;
	}
	while(mx%mn!=0)
	{
		mx=mx+lar;
	}
return mx;
}