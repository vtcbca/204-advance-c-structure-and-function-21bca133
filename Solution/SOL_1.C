/* WAP to create structure inventory */
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int iid,qty,rate;
	char iname[20];
}x[3];
void main()
{
	struct inventory x[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
		{
			printf("\nenter iteam id:");
			scanf("%d",&x[i].iid);
			printf("\nenter iteam name:");
			flushall();
			scanf("%s",x[i].iname);
			printf("\nenter item qty:");
			scanf("%d",&x[i].qty);
			printf("\nenter item rate:");
			scanf("%d",&x[i].rate);
			printf("\n----------------------");
		}
	printf("\n---------------------------\n");
	for(i=0;i<3;i++)
		{
			printf("\n id: %d",x[i].iid);
			printf("\n name: %s",x[i].iname);
			printf("\n qty: %d",x[i].qty);
			printf("\n rate: %d",x[i].rate);
		}
	getch();
}



