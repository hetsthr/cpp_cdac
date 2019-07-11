/*
	do while
	--------

initialization of variable;
do
{
	statement;
	increment/decrement of variable;
}
while(condition);
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("\nSimple Do while\n");
	i=1;
	do
	{
		printf(" %d",i);
		i++;
	}
	while(i<=100);
	printf("\nNested do while\n");

	i=1;
	do
	{
		j=1;
		do
		{
			printf(" %d",j);
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
getch();
}