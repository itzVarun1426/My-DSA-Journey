#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
	char sname[20];
	int s1,s2,s3,total;
	float per;
	char result[20];
	char cls[20];
};
void main()
{
	struct stud s={"Ram",67,78,45};
	clrscr();

	s.total=s.s1+s.s2+s.s3;
	s.per=s.total/3.0;

	if(s.s1>=40 && s.s2>=40 && s.s3>=40)
	{
		strcpy(s.result, "PASS");
	}
	else
	{
		strcpy(s.result, "FAIL");
	}
	if(s.per>=75)
	{
		strcpy(s.cls, "Dist");
	}
	else if(s.per>=60)
	{
		strcpy(s.cls, "First");
	}
	else if(s.per>=40)
	{
		strcpy(s.cls, "PASS");
	}
	else
	{
		strcpy(s.cls, "--------------");
	}

	printf("\n Student Name:%s",s.sname);
	printf("\n S1:%d",s.s1);
	printf("\n S2:%d",s.s2);
	printf("\n S3:%d",s.s3);
	printf("\n Result :%d",s.total);
	printf("\n Percent :%2f",s.per);
	printf("\n Result :%s",s.result);
	printf("\n Class :%s ",s.cls);
getch();
}
