//WAP to find the area of a circle
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,r;
	clrscr();
	printf("Enter the redius of the circle: ");
	scanf("%f",&r);

	a=3.14*r*r;
	printf("The area of circle is: %2f",a);
	getch();
}