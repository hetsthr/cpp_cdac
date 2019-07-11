/*
	2d array
	--------

	i[3][3];

	   0  1  2
	0 00 01 02
	1 10 11 12
	2 20 21 22
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i[3][3],j,k;
	clrscr();

	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("enter no[%d][%d]: ",j,k);
			scanf("%d",&i[j][k]);
		}
	}

	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf(" %d",i[j][k]);
		}
		printf("\n");
	}
getch();
}

