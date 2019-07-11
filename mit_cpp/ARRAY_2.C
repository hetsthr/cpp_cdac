/*
	2d array
	--------

	i[3][3];

	   0  1  2
	0 00 01 02
	1 10 11 12
	2 20 21 22

1) row sum col sum
2) 3X3 + 3X3 = 3X3
3) 3X3 * 3X3 = 3X3
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i[3][3],j[3][3],k[3][3],m,n;
	clrscr();
	printf("\n1st array:\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("enter no[%d][%d]: ",m,n);
			scanf("%d",&i[m][n]);
		}
	}
	printf("\n2nd array:\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("enter no[%d][%d]: ",m,n);
			scanf("%d",&j[m][n]);
		}
	}
	printf("\naddition is:\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			k[m][n]=i[m][n]+j[m][n];

		}
	}
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
		 printf("%d ",k[m][n]);
		}
		printf("\n");
	}


getch();
}

