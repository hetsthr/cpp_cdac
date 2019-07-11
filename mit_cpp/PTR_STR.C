// string with pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	char *name;
	clrscr();
	printf("Enter name: ");
	gets(name);
	printf("\n\t name is %s",name);
	printf("\n\t length is %d",strlen(name));

getch();
}