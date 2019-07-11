// inline function : do fast process

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		inline int sum(int i,int j)
		{
			return i+j;
		}
		inline int mul(int i,int j)
		{
			return i*j;
		}
};
void main()
{
	student s;
	int i,j;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;

	cout<<"\n\t sum= "<<s.sum(i,j);
	cout<<"\n\t mul= "<<s.mul(i,j);
getch();
}
