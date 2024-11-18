//to find maximum number in array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num;
	int a[20];
	int ans;

	clrscr();

	printf("\n Enter how many terms to check:-");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		printf("\n Enter the number:-");
		scanf("%d",&a[i]);
	}
	printf("\n Numbers in array are :-");
	for(i=0;i<num;i++)
	{
	       printf("\n a[%d]==%d",i,a[i]);
	}
	ans=max(a,num);
	printf("\n The maximum number is %d ",ans);

	getch();
}
int max(int a[20],int num)
{
	int i;
	int mx;
	mx=a[0];
	for(i=0;i<num;i++)
	{
		if(mx<a[i])
		{
			mx=a[i];
		}
	}
	return mx;
}

