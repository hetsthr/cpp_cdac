#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,*p;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);
	p=&i;

	*(p-2) = *p;
	    *p = *(p-1);
	*(p-1) = *(p-2);



	printf("swapping value of i:%d ",*p);
	printf("\naddress of i: %u",p);

	printf("swapping value of j:%d ",*(p-1));
	printf("\naddress of j: %u",p-1);


getch();
}