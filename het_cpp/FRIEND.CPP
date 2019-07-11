#include<iostream.h>
#include<conio.h>
class discount;
class product
{
	private:
		char name[15];
		int qty;
		float price,total;
		void friend mit(product,discount);

	public:
		void view()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"enter price: ";
			cin>>price;
			cout<<"enter qty: ";
			cin>>qty;
		}
};
class discount
{
	private:
		float dis;
		void friend mit(product,discount);

	public:
		discount()
		{
			dis=0.05;
		}
};
void mit(product p,discount d)
{
	float net;
	p.total=p.price*p.qty;
	d.dis=d.dis*p.total;
	net=p.total-d.dis;
	cout<<"\n\t total= "<<p.total;
	cout<<"\n\t discount= "<<d.dis;
	cout<<"\n\t net= "<<net;
}

void main()
{
	product p;
	discount d;
	clrscr();
	p.view();
	mit(p,d);
getch();
}







