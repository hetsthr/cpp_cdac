#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	clrscr();
	printf("\n1st MAtrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n2nd matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter no: ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n1st matrix * 2nd matrix = 3rd matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%2d",b[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
getch();
}
