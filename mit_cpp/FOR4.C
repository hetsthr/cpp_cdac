#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=5;i>=1;i--)
{
	for(k=5;k>=i;k++)
	{
	printf(" ");
	}
	for(j=i;j>=i;j--)
	{
	printf("%d",j);
	}
	printf("\n");
}
getch();
}











}