#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s,n;
	clrscr();

	printf("enter n : ");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		for(s=1; s<=i-1; s++)
		{
			printf(" ");
		}
		for(j=i; j<=n; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	getch();
}