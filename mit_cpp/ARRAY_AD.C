#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],b[5],c[5];
clrscr();
printf("\n1st array:\n");
for(i=0;i<=4;i++)
{
	printf("enter value:");
	scanf("%d",&a[i]);
}
printf("\n2nd array:\n");
for(i=0;i<=4;i++)
{
	printf("enter value:");
	scanf("%d",&b[i]);

}
printf("\naddition of two array is:\n");
for(i=;i<=4;i++)
{
	c[i]=a[i]+b[i];
	printf("addition of %d and %d is %d",a[i],b[i],c[i]);
}
getch();
}