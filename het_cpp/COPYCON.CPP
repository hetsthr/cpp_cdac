// copy constructor
#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int i,j;
		student()
		{
			i=25;
			j=50;
		}
		void view()
		{
			cout<<"\n\t i: "<<i;
			cout<<"\n\t j: "<<j;
		}
		student(student &m)
		{
			i=m.i;
			j=m.j;
			cout<<"\n\t Copy constructor is called..."<<i+j;
		}

};
void main()
{
	clrscr();
	student s,s1(s);
	s.view();
getch();
}
