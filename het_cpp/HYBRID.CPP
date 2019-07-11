/*
	multiple &  hybrid inheritance
	------------------------------

		personal
		   |
	   ----------------
	   |		  |
	student		faculty
	   |		  |
	   ----------------
		  |
		cdac
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
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
class faculty : public personal
{
	public:
		char edu[15],sub[15],exp[15],dept[15];
		float salary,hra,ta,da,pf,it,gross,net;

		void f_entry();
		void f_view();
};
class cdac : public student, public faculty
{
	public:
		cdac()
		{
			cout<<"\n\t\t\tArrow Computers";
			cout<<"\nbhungdev Branch\t\t\tph:9875226";
			cout<<"\n*************************************************************************\n";
		}
		void entry();
		void view();
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
void faculty :: f_entry()
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
	cout<<"enter salary: ";
	cin>>salary;

	hra=salary*0.05;
	ta=salary*0.07;
	da=salary*0.25;

	gross=salary+hra+ta+da;

	it=gross*0.04;
	pf=gross*0.09;

	net=gross-it-pf;
}
void faculty :: f_view()
{
	p_view();
	cout<<"education: "<<edu<<endl;
	cout<<"subject: "<<sub<<endl;
	cout<<"department: "<<dept<<endl;
	cout<<"experience: "<<exp<<endl;
	cout<<"salary: "<<salary<<endl
	    <<"hra: "<<hra<<endl
	    <<"ta: "<<ta<<endl
	    <<"da: "<<da<<endl
	    <<"gross: "<<gross<<endl
	    <<"it: "<<it<<endl
	    <<"pf: "<<pf<<endl
	    <<"net: "<<net<<endl;
}
void cdac :: entry()
{
	int i;
	do
	{
		clrscr();
		cout<<"\n\t 1. student";
		cout<<"\n\t 2. Faculty";
		cout<<"\n\t 3. main menu";

		cout<<"\n\t Select  Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				s_entry();
				break;

			case 2:
				f_entry();
				break;

			case 3:
				cout<<"\n\t Press any key to main menu....";
				break;
		}
		getch();
	}
	while(i<3);
}
void cdac :: view()
{
	int i;
	do
	{
		clrscr();
		cout<<"\n\t 1. student";
		cout<<"\n\t 2. Faculty";
		cout<<"\n\t 3. main menu";

		cout<<"\n\t Select  Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				s_view();
				break;

			case 2:
				f_view();
				break;

			case 3:
				cout<<"\n\t Press any key to main menu....";
				break;
		}
		getch();
	}
	while(i<3);
}
void main()
{
	clrscr();
	cdac c;
	int j;
	do
	{
		cout<<"\n\t 1. entry";
		cout<<"\n\t 2. view";
		cout<<"\n\t 3. Exit";

		cout<<"\n\t Select Option: ";
		cin>>j;

		switch(j)
		{
			case 1:
				c.entry();
				break;

			case 2:
				c.view();
				break;

			case 3:
				exit(0);
		}
	}
	while(j<3);
getch();
}



