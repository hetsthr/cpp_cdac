/*


	pointer
	-------

pointer is used to point out the memory location

	 i - location name
	25 - location value
     65524 - location address
     -----

      *p;

      *p - pointer - to get location value
       p - pointer variable - to get location address
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,*p;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);

	p=&i;
	printf("\n\t Address of i: %u",p);
	printf("\n\t Value of i: %d",*p);

	p=p-2;
	printf("\n\t Address of j: %u",p);
	printf("\n\t Value of j: %d",*p);
getch();
}