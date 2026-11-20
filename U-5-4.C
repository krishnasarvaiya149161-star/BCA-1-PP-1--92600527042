//Find out sum of digits of  given number using UDF
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,x,y;
	clrscr();
	printf("\n Enter two Digit Number: ");
	scanf("%d",&n);
	x=n%10;
	y=n/10;
	printf("Sum Of Digits is: %d",x+y);
	getch();

}


