/*
	dynamic memory allocation
	-------------------------

	malloc -
	calloc - bunch
	realloc
	free
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,i,n,sum=0;
	clrscr();
	printf("enter limit: ");
	scanf("%d",&n);

//	p=(int*)malloc(n*(sizeof(n)));
	p=(int*)calloc(n*(sizeof(n)));
	for(i=0;i<n;i++)
	{
		printf("Enter no: ");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",*(p+i));
		sum += *(p+i);
	}
	p=(int*)realloc(sum*(sizeof(sum)));
	printf("\n\t sum=%d",sum);
	free(p);
getch();
}


