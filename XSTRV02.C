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
	struct book b[20];
	int i,n;

	clrscr();
	printf("\n Enter the number of Books:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter the Book Name (%d):-",(i+1));
		scanf("%s",b[i].bname);

		printf("\n Enter the Author Name (%d):-",(i+1));
		scanf("%s",b[i].aname);

		printf("\n Enter the publisher of book (%d):-",(i+1));
		scanf("%s",b[i].pub);

		printf("\n Enter the Price of the book (%d):-",(i+1));
		scanf("%d",&b[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Book name (%d)   : %s",(i+1),b[i].bname);
		printf("\n Author name (%d) : %s",(i+1),b[i].aname);
		printf("\n Publisher (%d)   : %s",(i+1),b[i].pub);
		printf("\n price (%d)       : %d",(i+1),b[i].price);
	}
getch();
}