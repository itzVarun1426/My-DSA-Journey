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
	struct book b;
	clrscr();

	printf("\n Enter the Book Name:-");
	gets(b.bname);

	printf("\n Enter the Author Name:-");
	scanf("%s",b.aname);

	printf("\n Enter the publisher of book:-");
	scanf("%s",b.pub);

	printf("\n Enter the Price of the book:-");
	scanf("%d",&b.price);

	printf("\n Book name    : %s",b.bname);
	printf("\n Author name  : %s",b.aname);
	printf("\n Publisher    : %s",b.pub);
	printf("\n price        : %d",b.price);

getch();
}