#include<iostream.h>
#include<conio.h>
class marksheet
{
	public:
		char name[15],grade[5];
		int math,phy,chem,total;
		float percent;

		void entry();
		void view();
};
void marksheet :: entry()
{
	cin>>name>>math>>phy>>chem;
	total=math+phy+chem;
	percent=(total*100)/300;

}
void marksheet :: view()
{
       cout<<name<<"\t"<<math<<"\t"<<phy<<"\t"<<chem<<"\t\t"<<total<<"\t"<<percent<<"\t\t";
       if(percent>90&&percent<=100)
	{

		cout<<"A+"<<endl;
	       }

		else if(percent>80&&percent<=90)
		{
			cout<<"A"<<endl;
		}
		else if(percent>70&&percent<=80)
		{
			cout<<"B+"<<endl;
		}
		else if(percent>60&&percent<=70)
		{
			cout<<"B"<<endl;
		}
		else if(percent>50&&percent<=60)
		{
			cout<<"C+"<<endl;
		}
		else if(percent>40&&percent<=50)
		{
			cout<<"C"<<endl;
		}
		else if(percent>=35&&percent<=40)
		{
			cout<<"D"<<endl;
		}
		else
		{
			cout<<"FAIL"<<endl;
		}

}
void main()
{
	marksheet *p,ptr[10];
	clrscr();
	cout<<"-----------Marksheet-------------\n";
	cout<<"\nName\tMaths\tPhysics\tChemistry\n";
	cout<<"----\t-----\t-------\t---------\n";
	for(p=ptr;p<ptr+3;p++)
	{
		p->entry();
	}
	cout<<"\n\nName\tMaths\tPhysics\tChemistry\tTotal\tPercentage\tGrade\n";
	cout<<"----\t-----\t-------\t---------\t-----\t----------\t-----\n";
	for(p=ptr;p<ptr+3;p++)
	{

		p->view();

	}
getch();
}


