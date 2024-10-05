#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp;
	char ch;
	char fname[20];

	clrscr();
	printf("\n Enter the source file name:-");
	scanf("%s",fname);

	fp=fopen(fname,"w");
	if(fp==NULL)
	{
		printf("\n Unable to open file %s....",fname);
		getch();
		return;
	}
	printf("type here to save press (ctrl+Z):-\n\n");

	while(1)
	{
		ch=getchar();
		if(ch==EOF)
		{
			break;
		}
		fputc(ch,fp);
	}
	fclose(fp);
	printf("\n %s successfully saved...",fname);
	getch();
}