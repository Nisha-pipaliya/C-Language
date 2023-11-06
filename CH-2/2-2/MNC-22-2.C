#include<stdio.h>
#include<conio.h>
main()
{
	int h,b;
	float area;
	printf("enter base : ");
	scanf("%d",&b);
	printf("enter height : ");
	scanf("%d",&h);
	area = b*h;
	printf("area of rectaingle : %.2f",area);
      getch();
}