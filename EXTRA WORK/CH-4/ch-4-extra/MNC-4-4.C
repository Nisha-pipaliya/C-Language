#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter any numer : ");
	scanf("%d",&n);
	printf("%d %d %d %d %d ",++n,--n,n++,n--,++n);
	getch();
}