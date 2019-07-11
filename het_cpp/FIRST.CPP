/*
	the c++ programming
	-------------------

programming: set of instruction

programming language:

1) lower level
	- computer friendly
		- algol, bcpl.......

2) middle level
	- computer & user friendly
		- c, cpp.....

3)  heigher level
	- user friendly
		- java, .net ......


c is a POP language

POP: Procedure Oriented Programming

ex:

	1    4    1
	2    3    2
	3    2    4
	4    1

bjarne stroustup - c++ - bell lab. - 1989 - based on c - under dennis richie

c++ is an OOP language

OOP: Object Oriented Programming

	study table ---> class
	-----------

c:		c++:

java         i    j     k----> object
java
c            c   c++    java
c            c   c++    java
c++
c++

	datatype
	--------

1) primary
	char int float double signed unsigned const static void

2) derived
	array pointer

3) user defined
	structure union class

	operator
	--------

1) arithmetic		 + - * / %
2) relational            > < >= <= == !=
3) logical               && || !
4) increment/decrement   ++ --
5) conditional           ?:
6) assignment            = += -= *= /= %=
7) bitwise               >> << ^ ! ~
8) other special         . , -> []


*/

#include<iostream.h>
#include"conio.h"
#include<stdlib.h>
void main()
{
	int i,j,k,l,sum;
	char c;
	clrscr();
	cout<<"\n\tHet suthar";
	cout<<"\n\tMit patel"<<endl;
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"Enter value of j: ";
	cin>>j;

	cout<<"\n\t i= "<<i;
	cout<<"\n\t j= "<<j;

	k=i+j;
	cout<<"\n\t sum= "<<k;
	cout<<"\n\t sub= "<<i-j;

	k=100;
	if(i>0 && j>0)
	{
		if(i>j && i>k)
		{
			cout<<"\n\t i is max "<<i;
		}
		else if(j>k)
		{
			cout<<"\n\t j is max "<<j;
		}
		else
		{
			cout<<"\n\t k is max "<<k;
		}
	}

	a:
	cout<<"\n\t Swith case";
	cout<<"\n\t 1. mul";
	cout<<"\n\t 2. div";
	cout<<"\n\t 3. Exit";

	cout<<"\n\t Select Option: ";
	cin>>k;

	switch(k)
	{
		case 1:
			b:
			cout<<"enter value of i: ";
			cin>>i;
			cout<<"enter value of j: ";
			cin>>j;

			cout<<"\n\t mul= "<<i*j;
			cout<<"\n\t do you want to continue?(y/n): ";
			cin>>c;

			if(c=='y')
				goto b;
			else
				goto a;

		case 2:
			cout<<"enter value of i: ";
			cin>>i;
			cout<<"enter value of j: ";
			cin>>j;

			cout<<"\n\t div= "<<i/j;
		       break;
		case 3:
			exit(0);
	}
	cout<<"\nWhile\n";

	i=1;
	while(i<=100)
	{
		cout<<" "<<i;
		i++;
	}
	cout<<"\ndo While\n";
	j=0;
	i=1;
	do
	{
		cout<<" "<<i;
		j+=i;
		i++;
	}
	while(i<=100);
	cout<<"\t "<<j;

	cout<<"\nfor\n";

	for(i=1;i<=999;i++)
	{
		j=i/100;
		k=(i/10)%10;
		l=i%10;
		sum=(j*j*j)+(k*k*k)+(l*l*l);
		if(i==sum)
		{
			cout<<" "<<i;
		}
	}
getch();
}
