#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
main()
{
	int b,h;
	float area;
	P("enter base : ");
	S("%d",&b);
	P("enter height : ");
	S("%d",&h);
	area=0.5*b*h;
	P("area of traingle : %.2f",area);
	getch();

}