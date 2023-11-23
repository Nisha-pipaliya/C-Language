#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter any numer : ");
	scanf("%d",&n);
	printf("%d %d %d %d %d ",--n,++n,n--,n++,--n);
	getch();
}