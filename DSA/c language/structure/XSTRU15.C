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
	int i,n,tmp,j;

	clrscr();

	printf("\n Enter the number of players:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter the Name of player :-");
		scanf("%s",p[i].pname);

		printf("\n Enter the Country of Player:-");
		scanf("%s",p[i].country);

		printf("\n Enter the Run Scored by player:-");
		scanf("%d",&p[i].run);

		printf("\n Enter the Innings played total :-");
		scanf("%d",&p[i].inn);

		printf("\n Enter the notout innings played by player:-");
		scanf("%d",&p[i].notout);

		p[i].batavg=p[i].run/(p[i].inn-p[i].notout);
	}
	printf("\n%-5s %-15s %-15s %-10s %-10s %-10s %-14s","Sr","Name","Country","Run","Inning","Not Out","Batavg");

	for(i=0;i<n;i++)
	{
		printf("\n%-5d %-15s %-15s %-10d %-10d %-10d %-14.2f",i+1,p[i].pname,p[i].country,p[i].run,p[i].inn,p[i].notout,p[i].batavg);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].batavg<p[j].batavg)
			{
				tmp=p[i].batavg;
				p[i].batavg=p[j].batavg;
				p[j].batavg=tmp;
			}
		}
	}
	printf("\n\n\n The sorted list is:-\n");
	printf("\n%-5s %-15s %-15s %-10s %-10s %-10s %-14s","Sr","Name","Country","Run","Inning","Not Out","Batavg");

	for(i=0;i<n;i++)
	{
		printf("\n%-5d %-15s %-15s %-10d %-10d %-10d %-14.2f",i+1,p[i].pname,p[i].country,p[i].run,p[i].inn,p[i].notout,p[i].batavg);
	}
getch();
}