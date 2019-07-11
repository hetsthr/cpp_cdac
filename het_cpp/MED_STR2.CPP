#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
class store
{       private:
		char name[15],mf_date[15],exp_date[15],company[15],sea[15];
		float prize;
	public:
		void entry()
		{
			cout<<"Enter medicine name        : ";
			cin>>name;
			cout<<"\nEnter manufacturer name  : ";
			cin>>company;
			cout<<"\nEnter manufacturing date : ";
			cin>>mf_date;
			cout<<"\nEnter expiry date        : ";
			cin>>exp_date;
			cout<<"\nEnter prize              :";
			cin>>prize;
		}

		void view()
		{
			cout<<"\n\tMedical Store DATA\n";
			cout<<"Medicine name: "<<name;
			cout<<"\nManufacturer name: "<<company;
			cout<<"\nManufacturing date: "<<mf_date;
			cout<<"\nExpiry date: "<<exp_date;
			cout<<"\nPrize :"<<prize;
		}

};

void main()
{
	store s[15];
	int i=0,j=0,b=0;
	char c;
	do
	{
		clrscr();
		cout<<"\n\tWelcome to Medical Store\n";
		cout<<"\n1) Enter data\n2) View Data\n3) Search\n4) Exit";
		cin>>i;
		switch(i)
		{
			case 1:
				do
				{

					clrscr();
					s[j].entry();
					cout<<"\nDo you want to continue?(y/n): ";
					cin>>c;
					j++;
				}
				while(c=='y');
				break;

			case 2:
			       clrscr();
			       if(j==0)
			       {
					cout<<"\nEntry kar pela!!";
					getch();
			       }
			       else
			       {
					for(int k=0;k<j;k++)
					{
						clrscr();
						s[k].view();
						getch();
					}
			       }
			       break;

			case 3:

				do
				{
					clrscr();
					if(j==0)
					{
						cout<<"\nENTRY KAR BAKA";
						getch();
					}
					else
					{
						cout<<"Enter index no. to search:";
						cin>>b;
						s[b].view();
						cout<<"do you want to continue?(y/n): ";
						cin>>c;
					}
				}
				while(c=='y');
				break;

			case 4:
				exit(0);

		}
	}
	while(i<4);

}