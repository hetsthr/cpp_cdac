// recursion : function called it self

#include<iostream.h>
#include<conio.h>
void fibo(int n)
{
	static int i,f=0,b=1;
	if(n>0)
	{
		i=f+b;
		cout<<" "<<i;
		f=b;
		b=i;
		fibo(n-1);
	}
}
void main()
{
	int n,f=0,b=1;
	clrscr();
	cout<<"enter no: ";
	cin>>n;
	cout<<" "<<f<<" "<<b;
	fibo(n);
getch();
}

