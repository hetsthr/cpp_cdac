#include<iostream.h>
#include<conio.h>

class DB;
class DM
{
	private:
		int m,c;
		float distance;
		void friend add(DM,DB);
	public:
		void view()
		{
			cout<<"Enter value in meter:";
			cin>>m;
			cout<<"Enter distance in centimeter:";
			cin>>c;

		}
};

class DB
{
	private:
		int f,i;
		float dis;
		void friend add(DM,DB);
	public:
		void entry()
		{
			cout<<"Enter value in feet:";
			cin>>f;
			cout<<"Enter distance in inch:";
			cin>>i;
		}


};
void add(DM d,DB ds)
{
	float total;

	total=d.m+(d.c/100);
	cout<<"Total distance in meters is :"<<total;
	total=ds.i+(ds.f/10);
	cout<<"Total distance in feet is: "<<total;
}


void main()
{
	clrscr();
	DB ds;
	DM d;
	d.view();
	ds.entry();
	add(ds,d);
getch();
}