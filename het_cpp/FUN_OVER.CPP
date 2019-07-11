/*
	polymorphism
	------------

name same use different

1) compile time
	1. function overloading
	2. operator overloading
2) run time
	1. virtual function

	function overloading
	--------------------

function name must be same either return type is different or argument is different

*/

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int sum(int i,int j)
		{
			return i+j;
		}
		int sum(int i,int j,int k)
		{
			return i+j+k;
		}
		float sum(float i,float j)
		{
			return i+j;
		}
};
void main()
{
	student s;
	int a,b;
	clrscr();
	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;
	cout<<"\n\t sum= "<<s.sum(a,b);
	cout<<"\n\t sum= "<<s.sum(a,b,10);
	cout<<"\n\t sum= "<<s.sum((float)25.10,60.78f);
getch();
}