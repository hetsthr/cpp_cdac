#include<iostream.h>
#include<conio.h>
class time
{
	public:
		int hr,min;
		void entry();
		void view();
		void sum(time a,time b);
};
void time :: entry()
{
	cout<<"Enter Hours:"<<endl;
	cin>>hr;
	cout<<"Enter Minutes:"<<endl;
	cin>>min;
}
void time :: view()
{
	cout<<"You entered Time:"<<hr<<":"<<min<<endl;
}
void time :: sum(time t1, time t2)
{
	cout<<"Addition of time is:"<<t1.hr+t2.hr<<":"<<t1.min+t2.min;
}
void main()
{
	clrscr();
	time t1,t2,t3;
	t1.entry();
	t1.view();
	t2.entry();
	t2.view();
	t3.sum(t1,t2);
getch();
}