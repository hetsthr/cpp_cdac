
#include<stdio.h>
#include<conio.h>
void main()
{
	int i[3][3],m,n,k;
	clrscr();
	k=0;
	printf("\n1st array:\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("enter no[%d][%d]: ",m,n);
			scanf("%d",&i[m][n]);
		}
	}
	printf("\nsum!!!!!!!!!!!!!!!!!!:\n ");
	for(n=0;n<3;n++)
	{
		for(m=0;m<3;m++)
			{
			k=k+i[m][n];
			}
		printf("\n%d",k);
		k=0;
	}

	getch();
	}

