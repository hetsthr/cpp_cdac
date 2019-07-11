#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,k;
	clrscr();
	k=0;
	printf("\narray:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value:");
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			k=k+a[i][j];
			}
		}
	}
	printf("\naddition is:%d",k);
getch();
}