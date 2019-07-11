/*
	operator overloading
	--------------------

	unari
	binary

	this pointer
	------------

to get address of current object

*/
#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int i,j,k;

		void entry()
		{
			cout<<"enter value of i: ";
			cin>>i;
			cout<<"enter value of j: ";
			cin>>j;
			cout<<"enter value of k: ";
			cin>>k;
		}
		void view()
		{
			cout<<"value of i: "<<i<<endl;
			cout<<"value of j: "<<j<<endl;
			cout<<"value of k: "<<k<<endl;
			cout<<"\n\t Address of object: "<<(unsigned)this; // only in member function
//			cout<<"\n\t i: "<<this->i;
		}
		void operator +()
		{
			i+=5;
			j-=5;
			k=-k;
		}
		void operator -()
		{
			i-=5;
			j+=5;
			k=-k;
			if(i>j)
			{
				cout<<"\n\t i is max";
			}
		}
};
void main()
{
	student s;
	clrscr();

	s.entry();
	s.view();
	cout<<"\n\t after use of + operator\n";
	s.operator+();
	s.view();

	cout<<"\n\t after use of - operator\n";
	-s;
	s.view();


getch();
}


