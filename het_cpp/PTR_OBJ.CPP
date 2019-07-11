// object with pointer
#include<iostream.h>
#include<conio.h>
class product
{
	public:
		char name[15];
		float price,total;
		int qty;

		void entry();
		void view();
};
void product :: entry()
{
	cin>>name>>price>>qty;
	total=price*qty;
}
void product :: view()
{
	cout<<name<<"\t"<<price<<"\t"<<qty<<"\t"<<total<<endl;
}
void main()
{
	product *p,ptr[3];
	clrscr();

	cout<<"\n((( Product Sheet )))\n";
	cout<<"\nName\tPrice\tQty\n";

	for(p=ptr;p<ptr+3;p++)
	{
		p->entry(); // -> member access operator
	}
	cout<<"\nName\tPrice\tQty\tTotal\n";

	for(p=ptr;p<ptr+3;p++)
	{
		p->view(); // -> member access operator
	}
getch();
}