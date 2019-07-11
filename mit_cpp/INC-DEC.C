/*
	increment/decrement operator
	----------------------------

	postfix - i++/i--
	prefix  - ++i/--i
*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	printf("\n\t %d %d %d",i++,--i,i++);
	printf("\n\t %d",i);    //6

	j= ++i * ++i;
	printf("\n\t %d",j); //64
	printf("\n\t %d",i); //8

	printf("\n\t %d",i++ * i++); //72
	printf("\n\t %d",i);   //10

	j += i++ * i++ - ++i/2;
	printf("\n\t %d",j);
	printf("\n\t %d",i);

getch();
}