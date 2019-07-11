#include<iostream.h>
#include<conio.h>
class ages
{
	public:
		char name[15];
		int age;
		void view()
		{
			cout<<"your name: "<<name;
			cout<<"your age: "<<age;
		}

		void entry()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
		}

		ages operator >(ages p)
		{
		     //	ages a1;
			if(p.age>this->age)
			{
				cout<<"Details of elder person is: "<<p.name;

			}
			else
			{
				cout<<"Details of elder person is: "<<this->name;

			}
		}
};

void main()
{
	clrscr();
	ages p1,p2;
	cout<<"Person 1: ";
	p1.entry();

	cout<<"Person 2: ";
	p2.entry();

	p1>p2;
getch();
}

