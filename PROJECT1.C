#include<stdio.h>
#include<conio.h>

void main()
{
int a[20];
int i,sum,ch,str;
float avg;


clrscr();

printf("\n The available choices are :-");
printf("\n 1)..10th");
printf("\n 2)..12th");
printf("\n 3)..BCA");
printf("\n 4)..BCS");

printf("\n Enter your choice :-");
scanf("%d",&ch);

if(ch==1)
	{
	printf("\n--You have chosen 10th standard--");
	printf("\n Enter your Marathi Marks:-");
	scanf("%d",&a[0]);

	printf("\n Enter your English Marks:-");
	scanf("%d",&a[1]);

	printf("\n Enter your Hindi Marks:-");
	scanf("%d",&a[2]);

	printf("\n Enter your Science Marks:-");
	scanf("%d",&a[3]);

	printf("\n Enter your Math Marks:-");
	scanf("%d",&a[4]);

	printf("\n Enter your History Marks:-");
	scanf("%d",&a[5]);

	printf("\n Enter your Geography Marks:-");
	scanf("%d",&a[6]);

	sum=0;
	for(i=0;i<8;i++)
		{
		sum=sum+a[i];
		}
	avg=(sum)/7;
	if(avg>=35)
		{
		if(avg>=85)
			{
			printf("\n You have got %f percent You are selected.",avg);
			}
		else
			{
			printf("\n You have got %f percent you are not selected.",avg);
			}
		}
	else
		{
		printf("\n You have got %f percent You are failed.",avg);
		}
	}
if(ch==2)
	{
	printf("\n Choose your stream:-");
	printf("\n 1)..Science ");
	printf("\n 2)..Commerce");
	printf("\n 3)..Arts");

	printf("\n Enter Your stream:-");
	scanf("%d",&str);

	if(str==1)
		{
		printf("\n --You was in Science--");
		printf("\n Enter your Marathi Marks:-");
		scanf("%d",&a[0]);

		printf("\n Enter your English Marks:-");
		scanf("%d",&a[1]);

		printf("\n Enter your physics Marks:-");
		scanf("%d",&a[2]);

		printf("\n Enter your Chemistry Marks:-");
		scanf("%d",&a[3]);

		printf("\n Enter your Math Marks:-");
		scanf("%d",&a[4]);

		printf("\n Enter your Biology Marks:-");
		scanf("%d",&a[5]);

		sum=0;
		for(i=0;i<8;i++)
		{
		sum=sum+a[i];
		}
		avg=(sum)/6;
		if(avg>=35)
			{
			if(avg>=90)
				{
				printf("\n You have got %f percent You are selected.",avg);
				}
			else
				{
				printf("\n You have got %f percent you are not selected.",avg);
				}
			}
		else
			{
			printf("\n You have got %f percent You are failed.",avg);
			}
		}
	if(str==2)
		{
		printf("\n --You was in Commerce--");
		printf("\n Enter your Backlog Marks:-");
		scanf("%d",&a[0]);

		printf("\n Enter your Tax Marks:-");
		scanf("%d",&a[1]);

		printf("\n Enter your Aud Marks:-");
		scanf("%d",&a[2]);

		printf("\n Enter your Math Marks:-");
		scanf("%d",&a[3]);

		printf("\n Enter your Account Marks:-");
		scanf("%d",&a[4]);

		printf("\n Enter your Ecology Marks:-");
		scanf("%d",&a[5]);

		sum=0;
		for(i=0;i<7;i++)
		{
		sum=sum+a[i];
		}
		avg=(sum)/6;
		if(avg>=35)
			{
			if(avg>=85)
				{
				printf("\n You have got %f percent You are selected.",avg);
				}
			else
				{
				printf("\n You have got %f percent you are not selected.",avg);
				}
			}
		else
			{
			printf("\n You have got %f percent You are failed.",avg);
			}
		}
	if(str==3)
		{
		printf("\n --You was in Arts--");
		printf("\n Enter your Marathi Marks:-");
		scanf("%d",&a[0]);

		printf("\n Enter your English Marks:-");
		scanf("%d",&a[1]);

		printf("\n Enter your History Marks:-");
		scanf("%d",&a[2]);

		printf("\n Enter your Geography Marks:-");
		scanf("%d",&a[3]);

		printf("\n Enter your Psychology Marks:-");
		scanf("%d",&a[4]);

		printf("\n Enter your Economy Marks:-");
		scanf("%d",&a[5]);

		sum=0;
		for(i=0;i<7;i++)
		{
		sum=sum+a[i];
		}
		avg=(sum)/6;
		if(avg>=35)
			{
			if(avg>=90)
				{
				printf("\n You have got %f percent You are selected.",avg);
				}
			else
				{
				printf("\n You have got %f percent you are not selected.",avg);
				}
			}
		else
			{
			printf("\n You have got %f percent You are failed.",avg);
			}
		}
	else
		{
		printf("\n --Invalid Entry--");
		}
	}
if(ch==3)
	{
	printf("\n --You have chosen BCA--");

	printf("\n Enter your C programming Marks:-");
	scanf("%d",&a[0]);

	printf("\n Enter your DBMS Marks:-");
	scanf("%d",&a[1]);

	printf("\n Enter your Math Marks:-");
	scanf("%d",&a[2]);

	printf("\n Enter your Elecant Marks:-");
	scanf("%d",&a[3]);

	printf("\n Enter your Science 1 Marks:-");
	scanf("%d",&a[4]);

	printf("\n Enter your Science 2 Marks:-");
	scanf("%d",&a[5]);

	sum=0;
	for(i=0;i<7;i++)
		{
		sum=sum+a[i];
		}

	avg=(sum)/6;
	if(avg>=35)
		{
		if(avg>=90)
			{
			printf("\n You have got %f percent You are selected.",avg);
			}
		else
			{
			printf("\n You have got %f percent you are not selected.",avg);
			}
		}
	else
		{
		printf("\n You have got %d percent You are failed.",avg);
		}
	}
if(ch==4)
	{
	printf("\n --You have chosen BCS--");

	printf("\n Enter your C programming Marks:-");
	scanf("%d",&a[0]);

	printf("\n Enter your DBMS Marks:-");
	scanf("%d",&a[1]);

	printf("\n Enter your Math Marks:-");
	scanf("%d",&a[2]);

	printf("\n Enter your Science 1 Marks:-");
	scanf("%d",&a[3]);

	printf("\n Enter your Science 2 Marks:-");
	scanf("%d",&a[4]);

	sum=0;
	for(i=0;i<6;i++)
		{
		sum=sum+a[i];
		}

	avg=(sum)/5;
	if(avg>=35)
		{
		if(avg>=90)
			{
			printf("\n You have got %f percent You are selected.",avg);
			}
		else
			{
			printf("\n You have got %f percent you are not selected.",avg);
			}
		}
	else
		{
		printf("\n You have got %f percent You are failed.",avg);
		}
	}
else
	{
		printf("\n --Invalid Entry--");
	}
	getch();
}
