// software

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class student
{
	public:
		char name[15],add[15],ph[15],course[15],duration[15];
		float fees,dis,total;
		int no;

		void entry();
		void view();
};
void student :: entry()
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
	student s[13];
	int i=0,j=0;
	do
	{
		clrscr();
		cout<<"\n\t 1. entry";
		cout<<"\n\t 2. view";
		cout<<"\n\t 3. Exit";

		cout<<"\n\t Select Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				char c;
				do
				{
					clrscr();
					cout<<"\n((( Entry )))\n";
					s[j].entry();
					cout<<"\n\t do you want to continue?(y/n): ";
					cin>>c;
					j++;
				}
				while(c=='y');
				break;

			case 2:
				if(j==0)
				{
					cout<<"\n\t jo baka pehla data enter karvana....";
					getch();
				}
				else
				{
					for(int k=0;k<j;k++)
					{
						clrscr();
						cout<<"\n((( View )))\n";
						s[k].view();
						getch();
					}
				}
				break;

			case 3:
				exit(0);
		}
	}
	while(i<3);
getch();
}