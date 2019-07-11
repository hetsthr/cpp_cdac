// string function

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<process.h>
void main()
{
	char name[15],str[15];
	int i;
	clrscr();
	cout<<"enter name: ";
	gets(name);

	puts(name);

	cout<<"\n\t length is : "<<strlen(name);
	cout<<"\n\t copy is : "<<strcpy(str,name);
	cout<<"\n\t reverse is : "<<strrev(name);

	if(strcmpi(name,str)==NULL)
	{
		cout<<"\n\t Pelindrome";
	}
	else
	{
		cout<<"\n\t not";
	}
	cout<<"\n\t date : "<<_strdate(name);
	cout<<"\n\t time : "<<_strtime(name);
	cout<<endl;
	for(i=1;i<=100;i++)
	{
		cout<<" "<<random(500);
	}
getch();
}