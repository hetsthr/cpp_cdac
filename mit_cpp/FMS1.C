/*
	fms
	---

file management system

FILE *fp;

fopen - to create(open) the file
      - file_pointer = fopen("file_name/file_path","mode");
fprintf - to print in the file
	- fprintf(file_pointer,"statement");
fscanf - to scan on the file
       - fscanf(file_pointer,&variable);
fclose - to close the file
       - fclose(file_pointer);
feof - end of file
     - feof(file_pointer);

mode:

write 	"w"
read    "r"
append  "a"
binary  "wb+" "rb+" "ab+"



*/

#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	int i,j;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);

	p=fopen("d:\\bhupesh\\mit\\mit.doc","a");
	fprintf(p," %d %d",i,j);
	fclose(p);

	p=fopen("d:\\bhupesh\\mit\\mit.doc","r");
	while(feof(p)==NULL)
	{
		fscanf(p,"%d%d",&i,&j);
		printf(" %d %d",i,j);
	}
	fclose(p);
getch();
}
