/*
	for loop
	--------

1
12
123
1234
12345

     1
    12
   123
  1234
 12345
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	textbackground(3);
	clrscr();
	printf("\nnested for loop\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			delay(200);
			textcolor(12);
			cprintf(" %d",j);
		}
		printf("\n");
	}

	printf("\n\nnested for loop with space\n");
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			delay(200);
			textcolor(122);
			cprintf(" %d",j);
		}
		printf("\n");
	}
getch();
}