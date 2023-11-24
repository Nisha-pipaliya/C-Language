#include<stdio.h>
#include<conio.h>
main()
{
	int n,count=0;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("TOTAL DIGIT : %d",count);
	getch();
}