/*
	relational operator
	-------------------
	> < >= <= ==

	logical operator
	----------------

	&& and
	|| or
	 ! not


	 control structure
	 -----------------

	 1) conditional
	 2) circular

	 conditional control structure
	 -----------------------------

	 1) if
	 2) switch

	 if
	 --

	 1) if else
	 2) else if
	 3) nested if

	 syntax:

	 initialization of variable;
	 if(condition)
	 {
		statement;
		true part;
	 }
	 else
	 {
		statement;
		false part;
	 }

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);

	if(i>0 && j>0)
	{
		printf("\n\t both are positive");
	}
	else if(i<0 && j<0)
	{
		printf("\n\t both are negative");
	}
	else if(i==0 && j==0)
	{
		printf("\n\t both are zero");
	}
	else if(i<0 || j<0)
	{
		if(i<0)
		{
			printf("\n\t i is negative");
		}
		else
		{
			printf("\n\t j is negative");
		}
	}
	else if(i==0 || j==0)
	{
		if(i==0)
		{
			printf("\n\t i is zero");
		}
		else
		{
			printf("\n\t j is zero");
		}
	}
getch();
}