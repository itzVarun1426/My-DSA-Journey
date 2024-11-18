#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void main()
{
	FILE*fs,ft;
	char ch;
	char fsname[20],ftname[20];

	clrscr();

	printf("\n Enter the source file name:-");
	scanf("%s",&fsname);

	printf("\n Enter the name of the target file:-");
	scanf("%s",&ftname);

	fs=fopen(fsname,"r");
	if(fs==NULL)
	{
		printf("\ Unable to open File...");
		getch();
		return ;
	}
	ft=fopen(ftname,"w");
	if(ft==NULL)
	{
		printf("\n Unable to open File...");
		getch();
		return ;
	}

	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		{
			break;
		}
		fputc(ch,ft);
	}
	fclose(fs);

	printf("\n %s successfully copied in %s....",fsname,ftname);
	getch();
}
