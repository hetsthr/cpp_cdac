#include<iostream.h>
#include<conio.h>

class rail
{
	public:
		char t_name[15];
		int t_num,a,b,rate;
		void r_entry();
		void r_trains();
};

class person : public rail
{
	public:
		char p_name[15],ph[15];


		void p_entry();
		void p_view();
};

void rail :: r_entry()
{
	cout<<"Choose starting point:"<<endl;
	cout<<"\t1) Ahmedabad"<<endl;
	cout<<"\t2) Anand"<<endl;
	cout<<"\t3) Baroda"<<endl;
	cout<<"\t4) Surat"<<endl;
	cout<<"\t5) Mumbai"<<endl;
	cin>>a;

	cout<<"Choose destination:"<<endl;
	cout<<"\t1) Ahmedabad"<<endl;
	cout<<"\t2) Anand"<<endl;
	cout<<"\t3) Baroda"<<endl;
	cout<<"\t4) Surat"<<endl;
	cout<<"\t5) Mumbai"<<endl;
	cin>>b;
	r_trains();
}


void rail :: r_trains()
{
	cout<<"Available Trains for your travel plan!"<<endl;
	if((a==1||a==2||a==3)&&(b==1||b==2||b==3))
	{

		if(a>b)
		{
			cout<<"Baroda - Ahmedabad"<<endl;
		}
		else
		{
			cout<<"1)Ahmedabad - Baroda"<<endl;
		}
	}
	else if((a==1||a==2||a==4||a==5)&&(b==1||b==2||b==3||b==4||b==5))
	{
		if(a>b)
		{
			cout<<"1)Mumbai - Ahm"<<endl;
			cout<<"2)Mumbai - Brd"<<endl;

		}
		else
		{
			cout<<"1)Ahmedabad - Mumbai"<<endl;
			cout<<"2)Mumbai - Brd"<<endl;
		}

	}

}
void person :: p_entry()
{
	cout<<"Enter your details:------"<<endl;

	cout<<"Enter your name:";
	cin>>p_name;
	cout<<"Enter your phone number:";
	cin>>ph;
	r_entry();


	}

void person :: p_view()
{
	cout<<"Your details:------"<<endl;
	cout<<"your name:"<<p_name<<endl;
	cout<<"phone number:"<<ph<<endl;
	rate=(b-a)*50;
	if(rate<0)
	{

		cout<<"Fare is:"<<-rate;
	}
	else
	{

		cout<<"Fare is:"<<rate;
	}
}

void main()
{
	person p1;
	clrscr();
	cout<<"\t\tWelcome to Rail Services"<<endl;
	cout<<"\t\t------------------------"<<endl;
	p1.p_entry();
	p1.p_view();
getch();
}




