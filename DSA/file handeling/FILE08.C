#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp;
	int num;
	char fname[20];
	clrscr();

	printf("\n Enter the name of file to open :--");
	scanf("%s",&fname);

	fp=fopen(fname,"rb");
	if(fp==NULL)
	{
		printf("\n Unable to open file:-");
		getch();
		return;
	}

	printf("\n content in file %s \n ",fname);
	while(1)
	{
		num=getw(fp);
		if(num==-1)
		{
			break;
		}
		printf("\n %d",num);
	}
	fclose(fp);
	getch();
}
