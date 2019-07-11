#include<iostream.h>
#include<conio.h>
void main()
{
	int i[5],j[5],*p,l=0;
	clrscr();
	cout<<"Enter array1:";
	for(int k=0;k<5;k++)
	{
		cout<<"\n\tEnter value ["<<k<<"]";
		cin>>i[k];
	}
	cout<<"\nEnter array2:";
	for(k=0;k<5;k++)
	{
		cout<<"\n\tEnter value ["<<k<<"]";
		cin>>j[k];
	}
/*


	for(k=0;k<5;k++)
	{
		*(p+1)=i[k];
		for(int l=4;l>=0;l--)
		{
			*(p+2)=j[l];
			if(*(p+1)==*(p+2))
			{
			   cout<<"\nCommon value is: "<<*(p+1);
			}
		}
	}
*/
	for(k=0;k<5;k++)
	{
		for(int a=0;a<5;a++)
		{
			if(i[k]==j[a])
			{
				p[l]=i[k];
				l++;
			}
		}
	}
	for(k=0;k<l;k++)
	{
		cout<<" "<<p[k];
	}
getch();
}