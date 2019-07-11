// software

#include<iostream.h>
#include<conio.h>
class student // class name
{
	public:  // data hiding
		char name[15],add[15],ph[15],course[15],duration[15];
		float fees,dis,total;  // member variable (encapsulation)
		int no;

		void entry();  // member function  (abstraction)
		void view();
};
void student :: entry() // :: scope resolution operator
{
	cout<<"\nInput data\n";
	cout<<"Enter no      : ";
	cin>>no;
	cout<<"enter name    : ";
	cin>>name;
	cout<<"enter address : ";
	cin>>add;
	cout<<"enter ph no   : ";
	cin>>ph;
	cout<<"enter course  : ";
	cin>>course;
	cout<<"enter duration: ";
	cin>>duration;
	cout<<"enter fees    : ";
	cin>>fees;
	dis=fees*0.05;
	total=fees-dis;
}
void student :: view()
{
	cout<<"\nOutput data\n";
	cout<<"no       : "<<no<<endl;
	cout<<"name     : "<<name<<endl;
	cout<<"address  : "<<add<<endl;
	cout<<"ph no    : "<<ph<<endl;
	cout<<"course   : "<<course<<endl;
	cout<<"duration : "<<duration<<endl;
	cout<<"fees     : "<<fees<<endl;
	cout<<"discount : "<<dis<<endl;
	cout<<"total    : "<<total<<endl;
}
void main()
{
	student s[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		s[i].entry();
	}
	for(i=0;i<3;i++)
	{
		s[i].view();
	}
getch();
}