#include<iostream.h>
#include<conio.h>
class fact
{
	public:
		int k,i;

		fact(int j)
		{
			k=1;
			for(i=1;i<=j;i++)
			{
				k=k*i;
			}
			cout<<"Fctorial is "<<k;

		}


};

void main()
{

	int b;
	clrscr();
	cout<<"Enter no to find factorial:";
	cin>>b;
	fact a1(b);
getch();
}

