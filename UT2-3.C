//WAP to calculate simple interest
#include<stdio.h>
#include<conio.h>

void main()
{
	float p,t,r,i,is;
	clrscr();

	printf("Enter the principle amount;");
	scanf("%f",&p);

	printf("Enter the rate of interest;");
	scanf("%f",&r);

	printf("Enter the time period");
	scanf("%f",&t);

	i=(p*r*t)/100;
	printf("\n***********************************");
	printf("\*n Principal amount : %.2f   *" ,p);
	printf("\*n Rate of interest : %.2f   *" ,r);
	printf("\*n Nos of years     : %.2f   *" ,t);
	printf("\n***********************************");
	printf("\n Simple Interest is : %.2f",is);

	printf("The simple interest is: %f",i);
	getch();
}