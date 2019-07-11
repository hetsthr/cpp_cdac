#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class marksheet
{
	public:
	char name[15];
	int mat,sci,eng,total,avg;

	void entry();
	void view();
};

void marksheet :: entry()
{
	cin>>name>>mat>>sci>>eng;
	total=mat+eng+sci;
	avg=total/3;
}

void marksheet :: view()
{
	cout<<name<<"\t"<<mat<<"\t"<<sci<<"\t"<<eng<<"\t"<<avg<<"\t"<<total<<"\t";
	if((total>=200)&&(total<300))
	{
		cout<<"Grade A\n";
	}
	else if((total>=100)&&(total<200))
	{
		cout<<"Grade B\n";
	}
	else if(total<100)
	{
		cout<<"Grade C\n";
	}
}


void main()
{
	marksheet *p,ptr[3];
	clrscr();

	cout<<"\n***Marksheet***\n";
	cout<<"\nName\tMaths\tScience\tEnglish\n";

	for(p=ptr;p<ptr+3;p++)
	{
		 p->entry();
	}

	cout<<"\nName\tMaths\tScience\tEnglish\tAverage\tTotal\tGrade\n";

	for(p=ptr;p<ptr+3;p++)
	{
		p->view();
	}
getch();
}







