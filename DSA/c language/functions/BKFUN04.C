//to find permutation and combination
#include<stdio.h>
#include<conio.h>

void main()
{
	float NCR,NPR;
	long facto(int x);
	int n,r;

	clrscr();

	printf("\n Enter the total number of sample:-");
	scanf("%d",&n);

	printf("\n Enter the selection from the total:-");
	scanf("%d",&r);

	NCR=facto(n)/(float)(facto(n-r)*facto(r));
	NPR=facto(n)/(float)(facto(n-r));

	printf("\n NCR is %f ",NCR);
	printf("\n NPR is %f ",NPR);
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