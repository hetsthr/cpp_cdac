/*
	data hiding
	-----------

to proviode security

private: 	scope within class
protected:      scope only inherit
public:         every where
*/


#include<iostream.h>
#include<conio.h>
class student
{
	private: int i;
	protected: int j;
	public: int k;
		void entry()
		{
			i=5;
			j=10;
			k=15;
			cout<<"\n\t i= "<<i;
		}
};
class faculty : public student
{
	public:
		void view()
		{
			entry();
			cout<<"\n\t j= "<<j;
		}
};
void main()
{
	faculty f;
	clrscr();
	f.view();


	cout<<"\n\t k= "<<f.k;
getch();
}
