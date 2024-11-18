#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp;
	char ch;
	char fsname[20],ftname[20];

	clrscr();

	printf("\n Enter the source file name:-");
	scanf("%s",fsname);

	printf("\n Enter the name of the target file:-");
	scanf("%s",ftname);

