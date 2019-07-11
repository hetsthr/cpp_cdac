#include<iostream.h>
#include<conio.h>
float value(float p,int n,float r=0.15);
void printline(char ch='*',int len=40);
void main()
{
	float amount;
	clrscr();


	printline();
	amount=value(5000.00,5);
	cout<<"\nFinal value="<<amount<<"\n\n";
	printline('=');
getch();
}