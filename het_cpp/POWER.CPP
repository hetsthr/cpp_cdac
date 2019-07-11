#include<iostream.h>
#include<conio.h>
int power(int i, int j)
{
	static int a=1;
	if(j>0)
	{
	      a=i*a;
	      power(i,j-1);
	}
	return a;
}
void main()
{
	clrscr();
	int i,j;
	cout<<"ENter value of x: ";
	cin>>i;
	cout<<"Enter value of power : ";
	cin>>j;

	cout<<"Answer of"<<i<<"raise to"<<j<<"is :";
	cout<<power(i,j);
getch();
}