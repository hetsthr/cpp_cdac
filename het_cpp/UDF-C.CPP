/*
	udf
	---

user define function

1) decleration
2) calling
3) defination

*/
#include<iostream.h>
#include<conio.h>
int sum(int,int); // fun with retrn with argm
void sub(int,int); // fun without retrn with argm
int mul(); // fun with retrn without argm
void div(); // fun without retrn without argm
void main()
{
	int i,j,k,l;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	k=sum(i,j);
	cout<<"\n\t sum= "<<k;

	sub(i,j);

	l=mul();
	cout<<"\n\t mul= "<<l;

	div();
getch();
}
int sum(int a,int b)
{
	return a+b;
}
void sub(int a,int b)
{
	cout<<"\n\t sub= "<<a-b;
}
int mul()
{
	int i,j;
	cout<<"\nenter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	return i*j;
}
void div()
{
	int i,j;
	cout<<"\nenter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	cout<<"\n\t div= "<<i/j;
}