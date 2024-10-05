#include<stdio.h>
#include<conio.h>

struct player
{
	char pname[20];
	char country[20];
	int run,inn,notout;
	float batavg;
};
void main()
{
	struct player p[20];
	int n,i;

	clrscr();
	printf("\n Enter the number of player:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter the Name of player :-");
		scanf("%s",p[i].pname);

		printf("\n Enter the Country of player:-");
		scanf("%s",p[i].country);

		printf("\n Enter the Run scored:-");
		scanf("%d",&p[i].run);

		printf("\n Enter the innings played:-");
		scanf("%d",&p[i].inn);

		printf("\n Enter the not out innings played:-");
		scanf("%d",&p[i].notout);

		p[i].batavg=p[i].run/(p[i].inn-p[i].notout);
	}
		printf("\n\n%-5s%-15s%-15s%-10s%-10s%-10s%-14s","Sr","Name","Country","Runs","Innings","Notout","Batavg");

	for(i=0;i<n;i++)
	{
		printf("\n %-5d%-15s%-15s%-10d%-10d%-10d%-14.2f",i+1,p[i].pname,p[i].country,p[i].run,p[i].inn,p[i].notout,p[i].batavg);
	}
getch();
}