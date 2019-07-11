#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,*p;
	cout<<"Enter value of i:";
	cin>>i;
	cout<<"Enter value of j:";
	cin>>j;
	p=&i;
	*(p+1)=*p;
	*p=*(p-1);
	*(p-1)=*(p+1);
	cout<<" "<<*p<<" "<<*(p-1);
getch();
}





