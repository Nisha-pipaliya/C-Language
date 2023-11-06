#include<stdio.h>
#include<conio.h>
main()
{
	const float pi=3.14;
	float area;
	int r;
	printf("enter r : ");
	scanf("%d",&r);
	area=2*pi*r;
	printf("area of perameter : %.2f",area);
	getch();

}