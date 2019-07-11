/*
	friend function
	---------------

- non member function
- to access the private data

*/
#include<iostream.h>
#include<conio.h>
class product
{
	private:
		char name[15];
		int qty;
		float price,total;
		void friend mit(product);
};
void mit(product p)
{
	cout<<"Enter name: ";
	cin>>p.name;
	cout<<"enter price: ";
	cin>>p.price;
	cout<<"enter qty: ";
	cin>>p.qty;

	p.total=p.price*p.qty;
	cout<<"\n\t total= "<<p.total;
}
void main()
{
	product p;
	clrscr();
	mit(p);
getch();
}







