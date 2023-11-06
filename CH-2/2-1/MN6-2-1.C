#include<stdio.h>
#include<conio.h>

main()
{
	int a=12;
	int b=6;
	clrscr();
	printf("---------------------------\n");
	printf("%d sum  %d = %d\n",a,b,a+b);
	printf("%d sub  %d = %d\n",a,b,a-b);
	printf("%d mul  %d = %d\n",a,b,a*b);
	printf("%d div  %d = %d\n",a,b,a/b);
	printf("%d mod  %d = %d\n",a,b,a%b);
	printf("---------------------------\n");

	getch();
}