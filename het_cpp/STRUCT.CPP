// structure

#include<iostream.h>
#include<conio.h>
struct student
{
	char name[15],course[15];
	int t,p,total;
};
void main()
{
	struct student s;
	clrscr();

	cout<<"Enter name: ";
	cin>>s.name;
	cout<<"enter course: ";
	cin>>s.course;
	cout<<"enter marks: ";
	cin>>s.t>>s.p;
	s.total=s.t+s.p;
	cout<<"\n\t total= "<<s.total;
getch();
}