#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,n;
	clrscr();

	printf("enter n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(s=1; s<=i-1; s++)
		{
			printf(" ");
		}
		for(j=n; j>=i; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();

}