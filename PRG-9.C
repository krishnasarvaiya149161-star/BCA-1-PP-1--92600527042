//WAP Display ASCII code of input charecter
#include<conio.h>
#include<stdio.h>

void main()
{
	char x,y;
	clrscr();
	printf(" Enter the character in upper case:");
	scanf("%c",&x);
	printf(" The ASCII value is: %d",x);
	y=x+32;
	printf("\n The ASCII value of Lower Case is: %d",y);
	getch();
}