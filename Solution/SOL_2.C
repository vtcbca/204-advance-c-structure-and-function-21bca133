/* WAP to create structure marksheet */
#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int sid[5],m1[5],m2[5],m3[5],total[5],per[5];
	char sname[5][20];
}x;
void main()
{
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n enter a value sid:");
		flushall();
		scanf("%d",&x.sid[i]);
		printf("\n enter a value sname:");
		flushall();
		scanf("%s",x.sname[i]);
		printf("\n enter a value m1:");
		flushall();
		scanf("%d",&x.m1[i]);
		printf("\n enter a value m2:");
		flushall();
		scanf("%d",&x.m2[i]);
		printf("\n enter a value m3:");
		flushall();
		scanf("%d",&x.m3[i]);
		x.total[i]=x.m1[i]+x.m2[i]+x.m3[i];
		x.per[i]=x.total[i]/3;
	}
	printf("\n sid \t sname \t\t m1 \t m2 \t m3 \t total \t per");
	printf("\n==========================================================\n");
	for(i=0;i<5;i++)
	{
		printf("\n %d",x.sid[i]);
		printf("\t %s",x.sname[i]);
		printf("\t\t%d",x.m1[i]);
		printf("\t %d",x.m2[i]);
		printf("\t %d",x.m3[i]);
		printf("\t %d",x.total[i]);
		printf("\t %d%",x.per[i]);
	}
	getch();
}