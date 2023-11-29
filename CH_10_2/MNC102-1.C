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
		for(s=1; s<=n-i; s++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}

		printf("\n");
	}
	getch();
}