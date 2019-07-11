/*
	goto statement;
	label:

*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char c;
	a:
	clrscr();
	printf("*********************");
	printf("\n     SWitch case");
	printf("\n*********************");
	printf("\n\t 1. sum");
	printf("\n\t 2. sub");
	printf("\n\t 3. Exit");

	printf("\n\t Select Option: ");
	scanf("%d",&k);

	switch(k)
	{
		case 1:
			b:
			clrscr();
			printf("\n### sum ###\n");
			printf("Enter value of i: ");
			scanf("%d",&i);
			printf("Enter value of j: ");
			scanf("%d",&j);
			printf("\n\t sum=%d",i+j);

			fflush(stdin);
			printf("\n\t Do you want to continue?(y/n): ");
			scanf("%c",&c);

			if(c=='y')
				goto b;
			else
				goto a;
		case 2:
			d:
			clrscr();
			printf("\n### sub ###\n");
			printf("Enter value of i: ");
			scanf("%d",&i);
			printf("Enter value of j: ");
			scanf("%d",&j);
			printf("\n\t sub=%d",i-j);
			fflush(stdin);
			printf("\n\t Do you want to continue?(y/n): ");
			scanf("%c",&c);

			if(c=='y')
				goto d;
			else
				goto a;
		case 3:
			exit(0);
		default:

			printf("\n\t Wrong Option Selected Press any key to main menu....");
			getch();
			goto a;

	  }
getch();
}
