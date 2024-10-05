#include<stdio.h>
#include<conio.h>
#include<dos.h>

	void main()
	{
		int a[3][3];
		int i,j;

		clrscr();
		printf("\n Enter the element in sequence:-\n");
		printf("\nEnter the Elements is MATRIX A:-\n");
		for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				scanf("%d",&a[i][j]);
				}
			}
		printf("\n Matrix A :-");
		for(i=0;i<3;i++)
			{
			printf("\n");
			for(j=0;j<3;j++)
				{
				printf("%5d",a[i][j]);
				delay(200);
				}
			}
		printf("\n Transpose Matrix :-");
		for(i=0;i<3;i++)
			{
			printf("\n");
			for(j=0;j<3;j++)
				{
				delay(300);
				printf("%5d",a[j][i]);
				}
			}
		getch();
		}
