#include<stdio.h>
#include<conio.h>
main()
{
	int fd,ld,sum=0,n;
	clrscr();

	printf("enterany number :  ");
	scanf("%d",&n);

	ld=n%10;
	while(n>=10)
	{
		n=n/10;

	}
	fd=n;
	sum=fd+ld;

	printf("SUM OF FD & LD : %d",sum);

	getch();
}