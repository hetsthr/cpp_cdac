// structure with pointer

#include<stdio.h>
#include<conio.h>
struct product
{
	char name[15];
	int price,qty,total;
};
void main()
{
	struct product *p,ptr[3];
	int sum=0;
	clrscr();
	printf("\n>>> Product Sheet <<<\n");
	printf("\nName\tPrice\tQty\n");

	for(p=ptr;p<ptr+3;p++)
	{
		scanf("%s%d%d",p->name,&p->price,&p->qty);
	}

	printf("\nName\tPrice\tQty\tTotal\n");

	for(p=ptr;p<ptr+3;p++)
	{
		p->total = p->price * p->qty;
		printf("%s\t%d\t%d\t%d\n",p->name,p->price,p->qty,p->total);
		sum+=p->total;
	}
	printf("\t\t\t-----\n\t\t\t%d",sum);
getch();
}

