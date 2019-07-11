// udf with pointer

#include<stdio.h>
#include<conio.h>
void sum(int *,int *);
void main()
{
  int a,b,*p,*m;
  clrscr();
  p=&a;
  m=&b;
  printf("enter value of i: ");
  scanf("%d",p);
  printf("enter value of j: ");
  scanf("%d",m);

//  sum(p,m);  // called by reference
	sum(&a,&b);

getch();
}
void sum(int *p,int *m)
{
	printf("\n\t sum=%d",*p + *m);
}