#include<stdio.h>
#include<conio.h>

struct item
{
	char iname[20];
	char brand[20];
	int rate,qty;
	float bill;
};
struct costumer
{
	char cname[20];
	int nitem;
	struct item itm[20];
	float netbill;
};
void main()
{
	struct costumer c;
	int i;

	clrscr();

	printf("\n Enter the name of customer:-");
	scanf("%s",c.cname);

	printf("\n Enter the number of items purchased:-");
	scanf("%d",&c.nitem);

	c.netbill=0;
	for(i=0;i<c.nitem;i++)
		{
			printf("\n Enter the name of product:-");
			scanf("%s",c.itm[i].iname);

			printf("\n Enter the brand name:-");
			scanf("%s",c.itm[i].brand);

			printf("\n Enter the rate of item:-");
			scanf("%d",&c.itm[i].rate);

			printf("\n Enter the quantity of product :-");
			scanf("%d",&c.itm[i].qty);

			c.itm[i].bill=c.itm[i].rate*c.itm[i].qty;
			c.netbill=c.netbill+c.itm[i].bill;
		}

	clrscr();
	printf("\n================================================================================");
	printf("\n Customer name:=%s",c.cname);
	printf("\n================================================================================");
	printf("\n %4s %-15s %-15s %-7s %-9s %-7s","sr.no","item","Brand","Rate","Quantity","Bill");
	printf("\n--------------------------------------------------------------------------------");

	for(i=0;i<c.nitem;i++)
		{
			printf("\n %4d] %-15s %-15s %-7d %-9d %-7.2f",i+1,c.itm[i].iname,c.itm[i].brand,c.itm[i].rate,c.itm[i].qty,c.itm[i].bill);
			printf("\n--------------------------------------------------------------------------------");
		}
	printf("\nBill :-- %2f",c.netbill);
	printf("\n================================================================================");


getch();
}