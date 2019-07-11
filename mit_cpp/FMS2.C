#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p,*m;

	int i;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	if(i%2==0)
	{
		p=fopen("d:\\bhupesh\\mit\\even1.doc","a");
		fprintf(p," %d",i);
		p=fopen("d:\\bhupesh\\mit\\even1.doc","r");
		fscanf(p,"%d",&i);
		printf("%d",i);
		fclose(p);
	}
	else
	{
		m=fopen("d:\\bhupesh\\mit\\odd1.doc","a");
		fprintf(m," %d",i);
		m=fopen("d:\\bhupesh\\mit\\odd1.doc","r");
		fscanf(m,"%d",&i);
		printf("%d",i);
		fclose(m);
	}
getch();
}