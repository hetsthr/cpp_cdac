/*
	class: class is a bunch of related data.
	object: object is an unique medium which bind data with reference class.
*/
#include<iostream.h>
#include<conio.h>
class student
{
	public: // data hiding
		int no;    // member variable
}s; // global object
void main()
{
	student s,s1,s2; // object (local)
	clrscr();
	cout<<"Enter no: ";
	cin>>s.no; //5
	cout<<"Enter no1: ";
	cin>>s1.no; //10

	s2=s1;
	s.no=50;
	s1.no=s.no;

	s2=s1=s;
	cout<<"\n\t no: "<<s.no;
	cout<<"\n\t no1: "<<s1.no;
	cout<<"\n\t no2: "<<s2.no;
getch();
}

