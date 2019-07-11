/*
	fms
	---
*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
	public:
		char course[15];
		float fees;

		void entry();
		void view();
};
void student :: entry()
{
	cout<<"enter course name: ";
	cin>>course;
	cout<<"enter fees: ";
	cin>>fees;
}
void student :: view()
{
	cout<<course<<"\t"<<fees<<endl;
}
void main()
{
	student s;
	fstream mit;
	mit.open("d:\\bhupesh\\het\\suthar.doc",ios::app|ios::in);
	char c;
	do
	{
		clrscr();
		s.entry();
		mit.write((char *)&s, sizeof(s));
		cout<<"\n\t do you want to continue?(y/n): ";
		cin>>c;
	}
	while(c=='y');
	cout<<"\nCourse\tFees\n";
	mit.seekg(0);
	mit.read((char *)&s, sizeof(s));

	while(mit)
	{
		s.view();
		mit.read((char *)&s, sizeof(s));
	}
	mit.close();
getch();
}

