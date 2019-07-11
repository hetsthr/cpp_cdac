/*
	multi level inheritance
	-----------------------

	personal
	   |
	 faculty
	    |
	  salary
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
class faculty : public personal
{
	public:
		char edu[15],sub[15],dept[15],exp[15];

		void f_entry();
		void f_view();
};
class salary : public faculty
{
	public:
		float salary,hra,ta,da,pf,it,gross,net;

		void s_entry();
		void s_view();
};
void personal :: p_entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter address: ";
	cin>>add;
	cout<<"enter ph no: ";
	cin>>ph;
}
void personal :: p_view()
{
	cout<<"name: "<<name<<endl;
	cout<<"address: "<<add<<endl;
	cout<<"ph no: "<<ph<<endl;
}
void faculty:: f_entry()
{
	p_entry();
	cout<<"enter education: ";
	cin>>edu;
	cout<<"enter subject: ";
	cin>>sub;
	cout<<"enter department: ";
	cin>>dept;
	cout<<"enter experience: ";
	cin>>exp;
}
void faculty:: f_view()
{
	p_view();
	cout<<"education: "<<edu<<endl;
	cout<<"subject: "<<sub<<endl;
	cout<<"department: "<<dept<<endl;
	cout<<"experience: "<<exp<<endl;
}
void salary :: s_entry()
{
	f_entry();
	cout<<"enter salary: ";
	cin>>salary;
	hra=salary*0.04;
	ta=salary*0.05;
	da=salary*0.25;

	gross=salary+hra+ta+da;
	pf=gross*0.09;
	it=gross*0.04;
	net=gross-pf-it;
}
void salary :: s_view()
{
	f_view();
	cout<<"salary: "<<salary<<endl
	    <<"hra: "<<hra<<endl
	    <<"ta: "<<ta<<endl
	    <<"da: "<<da<<endl
	    <<"gross: "<<gross<<endl
	    <<"pf: "<<pf<<endl
	    <<"it: "<<it<<endl
	    <<"net: "<<net<<endl;
}
void main()
{
	salary s;
	clrscr();
	s.s_entry();
	s.s_view();
getch();
}

