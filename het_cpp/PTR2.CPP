#include<iostream.h>
#include<conio.h>
void main()
{
	int i[5],j[5],*p;
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
getch();
}