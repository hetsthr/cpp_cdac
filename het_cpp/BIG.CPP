/*
	heirarchical inheritance
	------------------------

		big
		 |
	-----------------
	|		|
      purchase	       sell

      1. purchase
	1. entry
	2. view
	3. main menu
      2. sell
	1. entry
	2. view
	3. main menu
      3. exit
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
class big
{
	public:
		char name[15],cname[15],code[15],date[15];

		void b_entry();
		void b_view();
};
class purchase : public big
{
	public:
		float price,total,dis,net;
		int qty;

		void p_entry();
		void p_view();
};
class sell : public big
{
	public:
		float price,total,dis,net;
		int qty;

		void s_entry();
		void s_view();
};
void big ::  b_entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter cname: ";
	cin>>cname;
	cout<<"enter date: ";
	cin>>date;
	cout<<"Enter code: ";
	cin>>code;
}
void big ::  b_view()
{
	cout<<"name: "<<name<<endl;
	cout<<"cname: "<<cname<<endl;
	cout<<"date: "<<date<<endl;
	cout<<"code: "<<code<<endl;
}
void purchase :: p_entry()
{
	b_entry();
	cout<<"Enter price: ";
	cin>>price;
	cout<<"Enter Qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.10;
	net=total-dis;
}
void purchase :: p_view()
{
	b_view();
	cout<<"price: "<<price<<endl;
	cout<<"Qty: "<<qty<<endl;
	cout<<"Total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void sell :: s_entry()
{
	b_entry();
	cout<<"Enter price: ";
	cin>>price;
	cout<<"Enter Qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.05;
	net=total-dis;
}
void sell :: s_view()
{
	b_view();
	cout<<"price: "<<price<<endl;
	cout<<"Qty: "<<qty<<endl;
	cout<<"Total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void main()
{
	purchase p[10];
	sell s[10];
	int i;
	textbackground(7);
	textcolor(1);
	clrscr();
	gotoxy(30,12);
	cout<<"WELCOME TO BIG BAZAAR";
	gotoxy(1,13);
	for(int d=1;d<=80;d++)
	{
		delay(200);
		cout<<"=";
	}
	gotoxy(45,25);
	cout<<"Press any key to main menu....";
	getch();
	do
	{
		textbackground(2);
		textcolor(14);
		clrscr();
		cout<<"\n\t 1. purchase";
		cout<<"\n\t 2. Sell";
		cout<<"\n\t 3. Exit";

		cout<<"\n\t select Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				int a=0,b=0;
				do
				{
					textbackground(3);
					textcolor(16);
					clrscr();
					cout<<"\n))) purchase (((";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu";

					cout<<"\n\t Select Option: ";
					cin>>a;

					switch(a)
					{
						case 1:
							char c;
							do
							{
								textbackground(4);
								textcolor(17);
								clrscr();
								cout<<"\n >>> Entry <<<\n";
								p[b].p_entry();
								cout<<"\n\tDo you want to continue?(y/n): ";
								cin>>c;
								b++;
							}
							while(c=='y');
							break;

						case 2:
							for(int j=0;j<b;j++)
							{
								textbackground(5);
								textcolor(18);
								clrscr();
								cout<<"\n >>> View <<<\n";
								p[j].p_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Press any key to main menu....";
							getch();
					}
				}
				while(a!=3);
				break;

			case 2:
				int x=0,y=0;
				do
				{
					textbackground(6);
					textcolor(19);
					clrscr();
					cout<<"\n))) sell (((";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu";

					cout<<"\n\t Select Option: ";
					cin>>x;

					switch(x)
					{
						case 1:
							char c;
							do
							{
								textbackground(7);
								textcolor(20);
								clrscr();
								cout<<"\n >>> Entry <<<\n";
								s[y].s_entry();
								cout<<"\n\tDo you want to continue?(y/n): ";
								cin>>c;
								y++;
							}
							while(c=='y');
							break;

						case 2:
							for(int k=0;k<y;k++)
							{
								textbackground(1);
								textcolor(21);
								clrscr();
								cout<<"\n >>> View <<<\n";
								s[k].s_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Press any key to main menu....";
							getch();
					}
				}
				while(x!=3);
				break;

			case 3:
				exit(0);
		}
	}
	while(i<3);
getch();
}


