#include<stdio.h>
#include<conio.h>
void main()
{
int phy,chem,maths,total,per;
clrscr();
printf("enter marks of physics:");
scanf("%d",&phy);
printf("enter marks of chemistry:");
scanf("%d",&chem);
printf("enter marks of maths:");
scanf("%d",&maths);
total=phy+chem+maths;
per=total/3;
if(phy>0 && phy<100 && chem>0 && chem<100 && maths>0 && maths<100)
{
	if(phy>35 && phy<100 && chem>35 && chem<100 && maths>35 && maths<100)
	{
		if(per>=80 && per<100)
		{
		printf("grade a");
		}
		else if(per>=60 && per<80)
		{
		printf("grade b");
		}
		else if(per>=40 && per<60)
		{
		printf("grade c");
		}

	 }
	 else
	 {
	 printf("fail");
	 }
}
else
{
printf("error");
}

getch();
}