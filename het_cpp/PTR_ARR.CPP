/* array with pointer

	new and delete operator
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int *i,j,n;
	clrscr();
	cout<<"enter limit: ";
	cin>>n;
	i=new int [n];
	for(j=0;j<n;j++)
	{
		cout<<"enter no: ";
		cin>>i[j];
	}
	for(j=0;j<n;j++)
	{
		cout<<" "<<i[j];
	}
	delete i;
getch();
}