/*
	for loop
	--------

for(initialization of variable;condition;increment/decrement of variable)
{
	statement;
}
1) sum 10=55 (1+2+3+...+10)
2) factorial 5=120 (1*2*3*4*5)
3) sum 10=2.92 (1/1 + 1/2 + 1/3 +.... + 1/10)
4) sum 10=1.71 (1/1! + 1/2! + 1/3! +.... + 1/10!)
5) fibonacci 0 1 1 2 3 5 8 13 .... 55 89 144
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("enter number:");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{

	}
	printf("value is:%d",(j*(j+1)/2));
getch();
}