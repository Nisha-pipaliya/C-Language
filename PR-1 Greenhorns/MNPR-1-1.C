#include<stdio.h>
#include<conio.h>
main()
{
	int c,f;
	clrscr();

	printf("enter Celsius : ");
	scanf("%d",&c);

	f=c*9/5+32;
	printf("The temperature in celsius : %d");

	getch();


}