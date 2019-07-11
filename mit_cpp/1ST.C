/*
       c programming
       -------------

programming: set of instruction
program: instruction

first language - algol

fortran, bcpl, basic, b, cobol, pascal, .....

dennis m richie - c language - bell lab - 1972 - based on bcpl

structure of c:
---------------

1) documentation

comment:
	1. single line - //
	2. multi line - /* ----------
		-----------------*/
/*
2) link

# symbolic constant

3) file include

#include<file name.h>

stdio.h
conio.h - console input output.header file
string.h
math.h

4) main function

void main()
{
	statement;
	return 0;
}

5) sub program

{

}

{
 ---- sub program
}

6) global decleration
i;
{

}

	datatype
	--------

25+75=100
i+j=k----> variable

ex: _meet
   name         use                                     convertable
(key word)    (store)	byte		range           character
==============================================================================
char	character                                       %c (for one character)
	numbers		 1	-128 to +127            %s (for more than one character)
	symbols
------------------------------------------------------------------------------
int	numbers		 2	-32768 to +32767	%d
------------------------------------------------------------------------------
float	real number	 4	3.4e -38 to 3.4e +37	%f
------------------------------------------------------------------------------
double	real numbers	 8	1.7e -308 to 1.7e +307	%lf %ld
==============================================================================
long short signed unsigned const void

*/

#include<stdio.h>
#include"conio.h"
void main() // main function
{
	float i,j,k;
	clrscr();
	printf("\n\tMit");
	printf("\n\t~~~\n");

//	i=259;
//	j=5360;
	printf("enter value of i: ");
	scanf("%f",&i);
	printf("enter value of j: ");
	scanf("%f",&j);
	k=i;
	printf("\n\ti=%.0f",i);
	printf("\n\tj=%.2f\n\tk=%f",j,k);
getch();
//return 0;
}
