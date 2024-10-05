#include<stdio.h>
#include<conio.h>
#include<dos.h>

	void main()
	{
	int r,c,n;
	char tye,sym;
	tye=181;
	sym=187;
	clrscr();
	printf("\n Enter the number of terms:");
	scanf("%d",&n);

	for(r=1;r<=n;r=r+1)
		{
		printf("\n");
		for(c=1;c<=r;c=c+1)
			{
			if(c%2==0)
				{
				printf("%5c",sym);
				}
			else
				{
				printf("%5c",tye);
				}
			delay(100);
			}
		}
	getch();
	}