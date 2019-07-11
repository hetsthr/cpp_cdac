#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class store
{       private:
		char name[15],mf_date[15],exp_date[15],company[15];
		float prize;
	public:
		void Entry()
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

		void View()
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
	int i,a,b;
	clrscr();
	cout<<"\n\tWelcome to Medical Store\n";
	A: cout<<"\n1) Enter data\n2) View Data\n3) Exit\n";
	cin>>b;
	switch(b)
	{
		case 1:
			{
				cout<<"How many entries you want to make?";
				cin>>a;
				for(i=0;i<a;i++)
				{
					cout<<"Entery:\n"<<i+1;
					s[i].Entry();

				} goto A;
			}
		case 2:
			{
				for(i=0;i<a;i++)
				{
					s[i].View();
				}
			}
		goto A;
		case 3:
			{
				exit(0);
			}
		default:
			cout<<"Enter wrong choise";
	}
getch();

}