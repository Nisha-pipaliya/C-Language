#include<stdio.h>
#include<conio.h>
main()
{
	int BS,HRA,DA,TA,GS;
	clrscr();
	printf("------------------------------\n");

	printf("enter the base salary : ");
	scanf("%d",&BS);
	printf("enter the house rent allownces : ");
	scanf("%d",&HRA);
	printf("enter the dearness allownces : ");
	scanf("%d",&DA);
	printf("enter the travelling allownces : ");
	scanf("%d",&TA);
	printf("------------------------------\n");


	HRA= BS*10/100;
	DA = BS*5/100;
	TA = BS*8/100;

	GS=BS+HRA+DA+TA;
	printf("Gross salary : %d",GS);
	printf("\n------------------------------\n");


	getch();
}


