// array with pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int *i,j,n;
	clrscr();
	printf("enter limit: ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("Enter no: ");
//		scanf("%d",&i[j]);
		scanf("%d",i+j);
	}
	for(j=0;j<n;j++)
	{
//		printf(" %d",i[j]);
		printf(" %d",*(i+j));
	}
getch();
}
