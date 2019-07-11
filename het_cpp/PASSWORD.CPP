#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char pasword[10],name[15],c;
	int i;
	clrscr();
	cout<<"Enter User name: ";
	gets(name);
	cout<<"Enter the password <any 4 characters>: ";
	for(i=0;i<4;i++)
	{
		c=getch();
		pasword[i]=c;
		c='*';
		cout<<c;

	}
//	pasword[i] = '\0';

	cout<<"\nYour password is :";
	for(i=0;i<4;i++)
	{
		cout<<pasword[i];
	}
getch();
}
