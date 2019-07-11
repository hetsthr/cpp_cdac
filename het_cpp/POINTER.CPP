/*
	pointer
	-------

pointer is used to point out the memory location

	 i - location name
	25 - location value
     65524 - location address
     -----

     *p;

     *p - pointer - to get location value
      p - pointer variable - to get location address

      double pointer
      --------------

      **ptr;


      ptr - to get address of address
     *ptr - to get address of last value(j)
    **ptr - to get value of last address(j)
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,*p,**ptr;
	clrscr();

	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	p=&i;
	cout<<"\n\t value of i: "<<*p;
	cout<<"\n\t Address of i: "<<(unsigned)p;

	p=p-1;
	cout<<"\n\t value of j: "<<*p;
	cout<<"\n\t Address of j: "<<(unsigned)p;

	ptr=&p;
	cout<<"\n\t value of last address(j): "<<**ptr;
	cout<<"\n\t Address of last value(j): "<<(unsigned)*ptr;
	cout<<"\n\t Address of address: "<<(unsigned)ptr;

getch();
}