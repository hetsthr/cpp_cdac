/*
	operators
	---------

1) arithmetic
2) relational
3) logical
4) conditional
5) assignment
6) increment/decrement
7) bitwise
8) opther special

	arithmetic operator
	-------------------

	+
	-
	*
	/
	% (remainder) (int)

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,j,sum,sub,mul,div,mod;
	int const a=25;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);

//	sum=i+j;
	sub=i-j;
	mul=i*j;
	div=i/j;
	mod=i%j;

	printf("\n\t sum=%d",i+j);
	printf("\n\t sub=%d",sub);
	printf("\n\t mul=%d",mul);
	printf("\n\t div=%d",div);
	printf("\n\t mod=%d",mod);
	printf("\n\t a=%d",a);
//	a=30;
	printf("\n\t a=%d",25+84);

getch();
}


