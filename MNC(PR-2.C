#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	(n%2==0)
		?printf("NUMBER IS EVEN !! ")
		:printf("NUMBER IS ODD !!") ;

	getch();
}
