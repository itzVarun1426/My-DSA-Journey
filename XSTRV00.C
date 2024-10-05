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
	struct book c={"C programming","Varun","Varry",420};
	clrscr();
	printf("\n Book name    :%s",c.bname);
	printf("\n Author name  :%s",c.aname);
	printf("\n Publisher    :%s",c.pub);
	printf("\n price        :%d",c.price);

getch();
}