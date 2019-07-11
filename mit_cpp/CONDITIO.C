/*
	conditional operator
	--------------------

	?:

	variable=(condition)?true_part:false_part;

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);
	printf("enter value of k: ");
	scanf("%d",&k);

	m=i>j?(i>k?i:k):(j>k?j:k);
	printf("\n\t %d is max",m);
getch();
}