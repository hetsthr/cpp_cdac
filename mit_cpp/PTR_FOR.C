#include<stdio.h>
#include<conio.h>
void main()
{
	int *p;
	clrscr();
	for(*p=1;*p<=5;(*p)++)
	{
		for(*(p-1)=1;*(p-1)<=*p;(*(p-1))++)
		{
			printf(" %d",*(p-1));
		}
		printf("\n");
	}
getch();
}