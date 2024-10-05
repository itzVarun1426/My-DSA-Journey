#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp;
	int num;
	char fname[20];

	clrscr();
	printf("\n Enter the file name :-");
	scanf("%s",fname);

	fp=fopen(fname,"wb");
	if(fp==NULL)
	{
		printf("\n Unable to open file....");
		getch();
		return;
	}
	printf("\n Enter Number to type to stop type(-1):-");
	while(1)
	{
		scanf("%d",&num);
		if(num==-1)
		{
			break;
		}
		putw(num,fp);
	}
	fclose(fp);
	printf("\n %s Successfully saved...",fname);
	getch();
}