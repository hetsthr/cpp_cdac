#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class food
{
	public:

		void order(int i)
		{
			textbackground(7);
			textcolor(1);
			clrscr();

			if(i==1)
			{
				int q;
				cout<<"DABELI (25Rs)"<<endl;
				cout<<"Enter Quantity:";
				cin>>q;
				cout<<"Total Billing: "<<25*q<<"Rs."<<endl;
				getch();
			}
			else if(i==2)
			{
				int q;
				cout<<"VADAPAV (30Rs)"<<endl;
				cout<<"Enter Quantity:";
				cin>>q;
				cout<<"Total Billing: "<<30*q<<"Rs."<<endl;
				getch();
			}
			else if(i==3)
			{
				int q;
				cout<<"SANDWICH (40Rs)"<<endl;
				cout<<"Enter Quantity:";
				cin>>q;
				cout<<"Total Billing: "<<40*q<<"Rs."<<endl;
				getch();
			}
		}

		void order(int j,int k)
		{
			textbackground(7);
			textcolor(1);
			clrscr();

			if((j==1&&k==2)||(k==1&&j==2))
			{
				int q1,q2;
				cout<<"DABELI (25Rs)"<<endl;
				cout<<"Enter Quantity of DABELI:";
				cin>>q1;
				cout<<"VADAPAV (30Rs)"<<endl;
				cout<<"Enter Quantity of VADAPAV:";
				cin>>q2;
				cout<<"Total Billing: "<<(25*q1)+(30*q2)<<"Rs."<<endl;
				getch();
			}
			else if((j==2&&k==3)||(j==3&&k==2))
			{
				int q1,q2;
				cout<<"SANDWICH (40Rs)"<<endl;
				cout<<"Enter Quantity of SANDWICH:";
				cin>>q1;
				cout<<"VADAPAV (30Rs)"<<endl;
				cout<<"Enter Quantity of VADAPAV:";
				cin>>q2;
				cout<<"Total Billing: "<<(40*q1)+(30*q2)<<"Rs."<<endl;
				getch();

			}
			else if((k==3&&j==1)||(k==1&&j==3))
			{
				int q1,q2;
				cout<<"SANDWICH (40Rs)"<<endl;
				cout<<"Enter Quantity of SANDWICH:";
				cin>>q1;
				cout<<"DABELI(25Rs)"<<endl;
				cout<<"Enter Quantity of DABELI:";
				cin>>q2;
				cout<<"Total Billing: "<<(40*q1)+(25*q2)<<"Rs."<<endl;
				getch();
			}
		}
			void order()
			{
				textbackground(7);
				textcolor(1);
				clrscr();

				int q1,q2,q3;
				cout<<"SANDWICH (40Rs)"<<endl;
				cout<<"Enter Quantity of SANDWICH:";
				cin>>q1;
				cout<<"DABELI (30Rs)"<<endl;
				cout<<"Enter Quantity of DABELI:";
				cin>>q2;
				cout<<"VADAPAV (25Rs)"<<endl;
				cout<<"Enter Quantity of VADAPAV:";
				cin>>q3;
				cout<<"Total Billing: "<<(40*q1)+(25*q3)+(30*q2)<<"Rs."<<endl;
				getch();
			}

};

void main()
{
	food f;
	int m,a,b,c;
	textbackground(1);
	textcolor(7);
	clrscr();
	do
	{

		textbackground(1);
		textcolor(7);
		clrscr();

		gotoxy(32,20);

		cout<<"\n\t\t\tWelcome To MIT FAST FOOD";
		cout<<"\n\tAvailable items...";
		cout<<"\n1. Dabeli(25)\n";
		cout<<"2. Vadapav(30)\n";
		cout<<"3. Sandwich(40)\n";
		cout<<"4. EXIT"<<endl;
		cout<<"\n\tHow many items you want to eat?: ";
		cin>>m;
		switch(m)
		{
			case 1:
				cout<<"Which item you want to order: ";
				cin>>a;
				f.order(a);
				break;

			case 2:
				cout<<"Select First Item: ";
				cin>>a;
				cout<<"Select your Second Item: ";
				cin>>b;
				f.order(a,b);
				break;

			case 3:
				cout<<"You choose all three items to order!!!";
				f.order();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Enter correct choice";
				break;
		}
	}while(m>0);

getch();
}