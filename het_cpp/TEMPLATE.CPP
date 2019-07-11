// template: to generic programming

#include<iostream.h>
#include<conio.h>
template <class t,class m>
class student
{
	public:
		t i,j;
		m k;

		void entry();
		void view();
};
template <class t,class m>
void student<t,m>::entry()
{
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	k=i+j;
}
template <class t,class m>
void student<t,m>::view()
{
	cout<<"value of i: "<<i<<endl;
	cout<<"value of j: "<<j<<endl;
	cout<<"answer is : "<<k<<endl;
}
void main()
{
	clrscr();
	cout<<"\nint int\n";
	student <int,int>s;
	s.entry();
	s.view();

	cout<<"\nfloat float\n";
	student <float,float>s1;
	s1.entry();
	s1.view();

	cout<<"\nchar int\n";
	student <char,int>s2;
	s2.entry();
	s2.view();

	cout<<"\nint char\n";
	student <int,char>s3;
	s3.entry();
	s3.view();
getch();
}