#include<stdio.h>
#include<conio.h>

main()
{
	const float pi=3.14;
	int r;
	float area;
	printf("enter r : ");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle : %.2f",area);
	getch();
}