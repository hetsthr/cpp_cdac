/*
	inheritance
	-----------

inherirance is a function which used properites of one class to another class.

1) single inheritance

	a  base class
	|
	b  derrived class

2) multi level inheritance

	a  base class
	|
	b derrived/base class (abstract)
	|
	c  derrived class

3) heirarchical inheritance

		a
		|
	-----------------
	|		|
	b		c
	|
-----------------
|		|
d		e


4) multiple inheritance

	a		b
	|		|
	-----------------
		|
		c

5) hybrid inheritance

		a
		|
	-----------------
	|		|
	b		c
	|		|
	-----------------
		|
		d

	single inheritance
	------------------

	personal
	   |
	student
*/

#include<iostream.h>
#include<conio.h>
class personal
{
	public:
		char name[15],add[15],ph[15];

		void p_entry();
		void p_view();
};
class student : public personal
{
	public:
		char course[15],duration[15];
		float fees,dis,total;

		void s_entry();
		void s_view();
};
void personal :: p_entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter address: ";
	cin>>add;
	cout<<"enter ph: ";
	cin>>ph;
}
void personal :: p_view()
{
	cout<<"name: "<<name<<endl;
	cout<<"address: "<<add<<endl;
	cout<<"ph: "<<ph<<endl;
}
void student :: s_entry()
{
	p_entry();
	cout<<"enter course: ";
	cin>>course;
	cout<<"enter duration: ";
	cin>>duration;
	cout<<"enter fees: ";
	cin>>fees;
	dis=fees*0.05;
	total=fees-dis;
}
void student :: s_view()
{
	p_view();
	cout<<"course: "<<course<<endl;
	cout<<"duration: "<<duration<<endl;
	cout<<"fees: "<<fees<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"total: "<<total<<endl;
}
void main()
{
	student s;
	clrscr();

	s.s_entry();
	s.s_view();
getch();
}
