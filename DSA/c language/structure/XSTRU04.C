#include<stdio.h>
#include<conio.h>

struct book
{
	char bname[20];
	char aname[20];
	char pub[20];
	int price;
};
void main()
{
	struct book b[20],tmp;
	int n,i,j;
	clrscr();
	printf("\n Enter the number of books:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		{
			printf("\n Enter the Name of book :-");
			scanf("%s",b[i].bname);

			printf("\n Enter the Name of author of book :-");
			scanf("%s",b[i].aname);

			printf("\n Enter the Name of publisher :-");
			scanf("%s",b[i].pub);

			printf("\n Enter the price of the book :-");
			scanf("%d",&b[i].price);
		}
	clrscr();
	printf("\n %-17s %-13s %-13s %-13s","--Book name--","--Author name--","--Publisher--","--Price--");

	for(i=0;i<n;i++)
		{
			printf("\n %-20s %-15s %-15s %-15d"
			,b[i].bname,b[i].aname,b[i].pub,b[i].price);
		}
	for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
			{
			if(b[i].price<b[j].price)
				{
				tmp=b[j];
				b[j]=b[i];
				b[i]=tmp;
				}
			}
		}
	printf("\n\n\n\n |||||--List of Books is--|||||");
	printf("\n %-17s %-13s %-13s %-13s","--Book name--","--Author name--","--Publisher--","--Price--");

	for(i=0;i<n;i++)
		{
			printf("\n %-20s %-15s %-15s %-15d"
			,b[i].bname,b[i].aname,b[i].pub,b[i].price);
		}
	getch();
}
