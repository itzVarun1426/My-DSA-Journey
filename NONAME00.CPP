#include<stdio.h>
#include<conio.h>

	void main()
	{
	int r,c,n;
	printf("\n Enter the number of terms:");
	scanf("%d",&n);

	for(r=1;r<=n;r=r+1)
		{
		printf("\n");
		for(c=r;c>=1;c=c-1)
			{
			printf("*");
			}
		}
	getch();
	}