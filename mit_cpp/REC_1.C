#include<stdio.h>
#include<conio.h>
void num(int,char[]);
void main()
{
	char name[15];
	int n;
	clrscr();
	printf("enter name:");
	scanf("%s",name);
	printf("enter no:");
	scanf("%d",&n);
	num(n,name);
getch();
}
void num(int n,char name[15])
{
	if(n>0)
	{
		printf("\nname:%s",name);
		num(n-1,name);
	}

}

