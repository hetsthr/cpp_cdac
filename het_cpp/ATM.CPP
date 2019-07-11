#include<iostream.h>
#include<conio.h>
#include<dos.h>
class user
{
	private:
		int i,j,k;

	protected:
		char name[15];

	public:

	       int p;
	       int pin()
		{
			i=1234;
			j=1000;
			k=2000;

			cout<<"Enter your PIN: ";
			cin>>p;
			if(p==i || p==j || p==k)
			{
				clrscr();
				gotoxy(30,12);
				cout<<"Welcome...";
				return p=1;
			}
			else
			{
				textbackground(2);
				textcolor(7);
				clrscr();
				cout<<"Chori na karay!!";
				return p=0;
			}
		}


};
class login : public user
{
      public:
	 void entry()
		{
		       do
		       {
				clrscr();
				pin();
		       }
		       while(p!=1);
		       cout<<"\nOut of PIN !! function";
		}
};
void main()
{
	login l;
	clrscr();
	gotoxy(30,12);
	cout<<"Het Mit Bank"<<endl;
	gotoxy(30,13);
	cout<<"Welcomes You...."<<endl;
	l.entry();

getch();
}

