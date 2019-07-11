// binary operator overloading

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int c,cpp;

		void entry()
		{
			cout<<"enter marks of c: ";
			cin>>c;
			cout<<"enter marks of cpp: ";
			cin>>cpp;
		}
		void view()
		{
			cout<<"\n\tmarks of c: "<<c;
			cout<<"\n\tmarks of cpp: "<<cpp;
			cout<<"\n\t Object Address; "<<(unsigned)this;
		}
 /*		student operator +(student t1)
		{
			student a1; // dummy object (rintime object)
			a1.c = t1.c + this->c;
			a1.cpp = t1.cpp + this->cpp;
			return a1;
		}        */
};
void main()
{
	student t,p,a;
	clrscr();
	cout<<"\ntheory marks\n";
	t.entry();
	t.view();
	cout<<"\nPractical marks\n";
	p.entry();
	p.view();
	cout<<"\nTheory + Practical marks\n";
	a=t+p;
//	a.c=t.c+p.c;
//        a.cpp=t.cpp+p.cpp;
	a.view();
getch();
}