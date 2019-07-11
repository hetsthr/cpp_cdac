// 2d string with pointer

#include<iostream.h>
#include<conio.h>
void main()
{
	char **name;
	int i;
	clrscr();

	for(i=0;i<3;i++)
	{
		cout<<"enter name; ";
		cin>>name[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<" "<<name[i];
	}
getch();
}