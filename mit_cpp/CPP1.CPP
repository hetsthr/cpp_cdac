#include<iostream.h>
#include<conio.h>
void pal(int i);
void main()
{
	int i;
	clrscr();
	cout<<"how many digits in ur number : ";
	cin>>i;
	pal(i);
	getch();
}
void pal(int i)
{
	int j;
	for(j=1;j<=i;j++)
	{
		cout<<"enter a digit: ";
		cin>>j;
	}
	if((j=1)==(j=i))
	{

		cout<<"value is palindrom";
	}
	else
	{
		cout<<"value is not palindrom";
	}

}


