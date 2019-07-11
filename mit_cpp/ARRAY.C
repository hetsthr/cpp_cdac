/*
	array
	-----

array is a group of different datatype of elements.

1) 1d array
2) 2d/multi d array
3) string

int i[];

1d array;

	1) default
		int i[]={36,25,14,47,58,69,98,84,52,47};
			  0  1  2  3  4  5  6  7  8  9
	2) user defined
		int i[5];
			[0][1][2][3][4];


ex: 2 8 3 9 4

1) reverse 4 9 3 8 2
2) even 2 8 4
3) sum 26
4) max 9
5) ascending 2 3 4 8 9
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i[]={36,25,14,47,58,69,98,84,52,47};
	int j,a[5];
	clrscr();
	printf("\nDefault Array\n");
	for(j=0;j<=9;j++)
	{
		printf("\n\t %d",i[j]);
	}
	printf("\n\nUser defined Array\n");

	for(j= 0;j<=4;j++)
	{
		printf("enter no[%d]: ",j);
		scanf("%d",&a[j]);
	}
	for(j=0;j<=4;j++)
	{
		printf("\n\t %d",a[j]);
	}
getch();
}