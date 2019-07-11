// continue : to skip data

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			if(i==j)
			{
				continue;
				printf("\n\t %d %d",i,j);
			}
			else
			{
				printf("\n\t %d %d",i,j);
			}
		}
	}
getch();
}