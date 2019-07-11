/*
	constructor
	-----------

- to initialize the member variable
- constructor name and class name must be same
- it does not have any return type
- it called it self when object of class is declered


	destructor
	----------

- to destroy the constructor
- ~(tild) sign is used
- it called when your program is terminate
- destructor can be overloaded
*/

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int no;
		student() // default constructor
		{
			no=5;
			cout<<"\n\t first constructor is called..."<<no;
		}
		student(int);    // parameterized constructor
		student(int a,int b)  // constructor overloading
		{
			cout<<"\n\t Third constructor is called..."<<a+b;
		}
		~student()
		{
			cout<<"\n\t Destructor is called....";
		}

};
student::student(int i)
{
	cout<<"\n\t Second constructor is called..."<<i;
}
void main()
{
//	textbackground(3);
	clrscr();
	int i,j;
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;
	student s,s1(i),s2(i,j);


getch();
}