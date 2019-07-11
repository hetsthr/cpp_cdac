#include<stdio.h>
#include<conio.h>
struct marksheet
{
	char name[15];
	int maths,sci,eng;
	int total;

};
void main()
{

	struct marksheet *p,ptr[3];
	int per=0;
	clrscr();
	printf("\n>>> marksheet <<<\n");
	printf("\nname\tmaths\tscience\tenglish");

	for(p=ptr;p<ptr+3;p++)
	{
		scanf("%s%d%d%d",p->name,&p->maths,&p->sci,&p->eng);
	}
	printf("\nname\tmaths\tscience\tenglish\ttotal");

	for(p=ptr;p<ptr+3;p++)
	{
		p->total=p->maths+p->sci+p->eng;
		printf("\n%s\t%d\t%d\t%d\t%d\n",p->name,p->maths,p->sci,p->eng,p->total);
		per+=p->total;
	}
	printf("\t\t\t----\n\t\t\t%d",per/3);
	getch();
}





