/* WAP to ctreate structure employee and perform menudriven program */
#include<stdio.h>
#include<conio.h>
struct employee
{
	int eid[3],basic[3];
	char ename[10],dept[15];
}x;
void main()
{
	int n,i,j,serch;
	clrscr();
	printf("\t\tMENU\n--------------------------\n");
	printf("1-print slary slip\n2-serch emp base on id\n3-serch emp base on dept\n");
	printf("4-sort record base on salary\n5-sort record base on emp\n6-exit");
	printf("\n-------------------------");
	for(i=0;i<3;i++)
	{
		printf("\n EID:");
		scanf("%d",&x.eid[i]);
		printf("\n ENAME:");
		flushall();
		scanf("%s",x.ename[i]);
		printf("\n DEPARTMENT:");
		flushall();
		scanf("%s",x.dept[i]);
		printf("\n BASIC:");
		scanf("%d",&x.basic[i]);
		printf("\n-----------------------------------");
	}
	for(i=0;i<3;i++)
	{
		printf("\nEID: %d",x.eid[i]);
		printf("\nENAME: %s",x.ename[i]);
		printf("\nDEPT: %s",x.dept[i]);
		printf("\nBASIC: %d",x.basic[i]);
		printf("\n-----------------------\n");
	}
		printf("\n-------------------------\nEnter your choice:");
		scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("\n-----SALARY LIST-----");
		for(i=0;i<3;i++)
		{
			printf("\n%s = %d",x.ename[i],x.basic[i]);
		}
		break;
	case 2:
		printf("\n enter id want you serch:");
		scanf("%d",&serch);
		i=serch;
		if(serch==x.eid[i])
		{
			printf("%d",x.eid[i]);
		}
		else
		{
			printf("\nyou are entered EID is not available here");
		}
			break;
	case 3:
		printf("\n enter dept_name want you serch:");
		scanf("%d",&serch);
		for(i=0;i<3;i++)
		{
			if(serch==x.dept[i])
			{
				printf("\n dept is %d location",i);
			}
			else
			{
				printf("\nyou are entered dept_name is not available here");
			}
		}
		break;
	case 4:
		for(i=0;i<3;i++)
			for(j=0;j<i;j++)
			{
				printf("\nsort base on eid");
			}
		break;
	case 5:
		for(i=0;i<3;i++)
			for(j=0;j<i;j++)
			{
				printf("\nsort base on ename");
			}
		break;
	case 6:
		exit(0);
		break;
	default:
		printf("\n you are enter incorrect number");
	}
	getch();
}
