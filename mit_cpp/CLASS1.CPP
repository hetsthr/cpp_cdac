#include<iostream.h>
#include<conio.h>
#include<time.h>
class store
{
	public:
	char name[15],com[15],mf_date[15],exp_date[15],date[15];
	float price;
};
void main()
{
	store s[3];
	int i;
	clrscr();

	for(i=0;i<3;i++)
	{
		cout<<"enter name of medicine: ";
		cin>>s[i].name;
		cout<<"enter price of medicine: ";
		cin>>s[i].price;
		cout<<"enter company of medicine: ";
		cin>>s[i].com;
		cout<<"enter today's date: ";
		cin>>s[i].date;
		cout<<"enter manufacturing date: ";
		cin>>s[i].mf_date;
		cout<<"enter expire date: ";
		cin>>s[i].exp_date;
	}
	for(i=0;i<3;i++)
	{
		cout<<"medicine: "<<s[i].name<<endl;
		cout<<"price: "<<s[i].price<<endl;
		cout<<"company: "<<s[i].com<<endl;
		cout<<"today's date: "<<s[i].date<<endl;
		cout<<"manufacturing date: "<<s[i].mf_date<<endl;
		cout<<"expire date: "<<s[i].exp_date<<endl;
	}
getch();
}


