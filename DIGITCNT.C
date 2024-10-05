#include<stdio.h>
#include<conio.h>
void main()
{
	int num,no,digitcnt;
	clrscr();

	printf("\n Enter the number:-");
	scanf("%d",&no);

	num=no;
	digitcnt=0;
	while(num>0)
		{
		digitcnt=digitcnt+1;
		num=num/10;
		}
	printf("\n The %d has number has %d digits.",no,digitcnt);
getch();
}