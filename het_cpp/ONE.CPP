 #include<stdio.h>
 #include<conio.h>
 #include<iostream.h>
 void main()
 {
	clrscr();
	int a[5];
	int i,j,k;

	for(i=0;i<5;i++)
	{
		cout<<"Enter value ["<<i<<"]";
		cin>>a[i];
	}

	cout<<"1) View all \n 2) Edit \n 3) Search \n 4) Delete";
	cout<<"Choose your option";

	cin>>j;
	switch(j)
	{
		case 1:

			for(i=0;i<5;i++)
			{
				cout<<a[i]<<" ";
			}

		break;


		case 2:
			cout<<"ENter index number: ";
			cin>>i;
			cout<<"Current value is: "<<a[i];
			cout<<"Enter new value: ";
			cin>>a[i];
			cout<<"New value is :"<<a[i];
		break;


		case 3:
			cout<<"Enter index number:";
			cin>>i;
			cout>>"The value is: "<<a[i];
		break;

		case 4:
			cout<<"Enter index number:";
			cin>>i;
			a[i]=0;
			cout<<"Value of ["<<i<<"] is deleted "<<a[i];
		break;
	}
 getch();
 }

