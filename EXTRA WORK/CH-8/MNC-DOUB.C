#include<stdio.h>
#include<conio.h>

main()
{
	int first,last;
	clrscr();

	printf("enter first year : ");
	scanf("%d",&first);
	printf("enter last year : ");
	scanf("%d",&last);

	while(last>=first)
	{
		if(first%4==0)
		{
			printf("%d\n",first);
		}
		first++;
	}

	getch();
}