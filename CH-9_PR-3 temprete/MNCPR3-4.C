#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,count=0,n;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n; i++)
	{
		count=0;

		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && i!=0)
			printf("%d ",i);


	}



	getch();
}