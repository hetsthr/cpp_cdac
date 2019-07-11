// software

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		char name[15],add[15],ph[15],course[15],duration[15];
		float fees,dis,total;
		int no;
};
void main()
{
	student s[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		cout<<"\nInput data\n";
		cout<<"Enter no: ";
		cin>>s[i].no;
		cout<<"enter name: ";
		cin>>s[i].name;
		cout<<"enter address: ";
		cin>>s[i].add;
		cout<<"enter ph no: ";
		cin>>s[i].ph;
		cout<<"enter course: ";
		cin>>s[i].course;
		cout<<"enter duration: ";
		cin>>s[i].duration;
		cout<<"enter fees: ";
		cin>>s[i].fees;
		s[i].dis=s[i].fees*0.05;
		s[i].total=s[i].fees-s[i].dis;
	 }
	 for(i=0;i<3;i++)
	 {
		cout<<"\nOutput data\n";
		cout<<"no: "<<s[i].no<<endl;
		cout<<"name: "<<s[i].name<<endl;
		cout<<"address: "<<s[i].add<<endl;
		cout<<"ph no: "<<s[i].ph<<endl;
		cout<<"course: "<<s[i].course<<endl;
		cout<<"duration: "<<s[i].duration<<endl;
		cout<<"fees: "<<s[i].fees<<endl;
		cout<<"discount: "<<s[i].dis<<endl;
		cout<<"total: "<<s[i].total<<endl;
	}
getch();
}