#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
void main()
{
	int i[5],j,k,l;
	clrscr();
	for(j=0;j<=5;j++)
	{
		cout<<"enter no["<<j<<"]:";
		cin>>i[j];
	}

	cout<<"1.view\n2.search\n3.exit";
	cout<<"\n\t enter your choice: ";
	cin>>k;

	switch(k)
	{
		case 1:
			for(j=0;j<=5;j++)
			{
				cout<<"\n"<<i[j];
			}
			break;
		case 2:
			cout<<"enter value you have to search: ";
			cin>>l;
			if(l==i[j])
			{
				cout<<"value at index j"<<j;
			}
			else
			{
			cout<<"error!!";
			}
			break;
		case 3:
			exit(0);
	}



getch();
}