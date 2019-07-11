/*
	dynamic constructor with new and delete operator
	-------------------

	char name[15],str[15];
	mit		patel

	mit patel

 [][][][][][][][][]
*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class student
{
	public:
		char *name;
		int l;

		student()
		{
			l=0;
			name=new char[l+1];
		}
		student(char *s)
		{
			l=strlen(s);
			name=new char[l+1];
			strcpy(name,s);
		}
		void concate(student n1,student n2)
		{
			l=n1.l+n2.l;
			delete name;
			name=new char[l+1];
			strcpy(name,n1.name);
			strcat(name,n2.name);
		}
		void view()
		{
			cout<<"\n\t your full name is: "<<name;
		}


};
void main()
{
	clrscr();
	student s;
	char name1[15],name2[15];

	cout<<"enter first name: ";
	gets(name1);
	cout<<"enter last name: ";
	gets(name2);

	student s1(name1);
	student s2(name2);

	s.concate(s1,s2);
	s.view();
getch();
}