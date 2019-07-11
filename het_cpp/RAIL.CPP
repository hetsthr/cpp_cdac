#include<iostream.h>
#include<conio.h>

class rail
{
	public:
		char t_name[15];
		int t_num;

		float r=50;

		void r_entry();
		void r_view();
};

class passanger : public rail
{
	public:
		char p_name[15],ph[15];
		int a,b;

		void p_entry();
		void p_view();
};

void rail :: r_entry()
{
	cout<<"Enter train name:";
	cin>>t_name;
	cout<<"Enter train number:";
	cin>>t_num;
	if(t_num-1000==1)
	{
		cout<<"Arrival : 2 pm"<<endl<<"Departure : 10 am";
	}
	else if(t_num-1000==2)
	{
		cout<<"Arrival : 8 am"<<endl<<"Depature :



