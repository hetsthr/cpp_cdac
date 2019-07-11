// function with cpp

#include<iostream.h>
#include<conio.h>
int sum(int i,int j)
{
	return i+j;
}
void main()
{
	int i,j;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	cout<<"\n\t sum= "<<sum(i,j);
getch();
}