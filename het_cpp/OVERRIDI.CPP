// function overriding : name same use same (signature)
#include<iostream.h>
#include<conio.h>
class student
{
	public:
		void entry()
		{
			cout<<"\n\t student entry called....";
		}
		void view()
		{
			cout<<"\n\t student view called...";
		}
};
class faculty : public student
{
	public:
		void entry()
		{
			student::entry();
			cout<<"\n\t faculty entry called....";
		}
		void view()
		{
			student::view();
			cout<<"\n\t faculty view called...";
		}
};
void main()
{
	faculty f;
	clrscr();
	f.entry();
	f.view();
getch();
}
