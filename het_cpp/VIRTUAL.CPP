/*
	virtual function
	----------------

	run time polymorphism
*/

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		virtual void entry()
		{
			cout<<"\n\t student entry called....";
		}
		virtual void view()
		{
			cout<<"\n\t student view called...";
		}
};
class faculty : public student
{
	public:
		void entry()
		{
			cout<<"\n\t faculty entry called....";
		}
		void view()
		{
			cout<<"\n\t faculty view called...";
		}
};
void main()
{
	faculty f;
	student s,*p;
	clrscr();
	p=&s;
	p->entry();
	p->view();
	p=&f;
	p->entry();
	p->view();
getch();
}
