// area of circle. rectangle and triangle
#include<iostream.h>
#include<conio.h>
#define pi 3.14
#include<stdlib.h>
class area_fun
{
	public:
		void area(int r)
		{
			cout<<"\n\t Area of circle is: "<<pi*r*r;
		}
		void area(int l,int b)
		{
			cout<<"\n\t area of rectangle: "<<l*b;
		}
		void area(int b,int h,float a)
		{
			cout<<"\n\t area of triangle: "<<b*h*a;
		}
};
void main()
{
	area_fun a;
	int r,l,b,h,i;
	do
	{
		clrscr();
		cout<<"\n\t Area of .....";
		cout<<"\n\t 1. circle";
		cout<<"\n\t 2. rectangle";
		cout<<"\n\t 3. Triangle";
		cout<<"\n\t 4. Exit";

		cout<<"\n\t Select Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				cout<<"Enter r: ";
				cin>>r;
				a.area(r);
				break;

			case 2:
				cout<<"enter l: ";
				cin>>l;
				cout<<"enter b: ";
				cin>>b;
				a.area(l,b);
				break;

			case 3:
				cout<<"Enter b: ";
				cin>>b;
				cout<<"enter h: ";
				cin>>h;
				a.area(b,h,0.5);
				break;

			case 4:
				exit(0);
		}
		getch();
	}
	while(i<4);
getch();
}
