// array and string with 2d string
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i[5],j;
	char name[15];
	char str[5][15];
	clrscr();
	cout<<"Enter faculty name: ";
	gets(name); //cin.getline(name,15);

	cout<<"\nName\tRoll no\n";
	for(j=0;j<5;j++)
	{
//		cout<<"enter no["<<j<<"]: ";
		cin>>str[j]>>i[j];
	}
	cout<<"\n\t name is: "<<name<<endl;

	cout<<"\nName\tRoll no\n";
	for(j=0;j<5;j++)
	{
		cout<<str[j]<<"\t"<<i[j]<<endl;
	}
getch();
}
