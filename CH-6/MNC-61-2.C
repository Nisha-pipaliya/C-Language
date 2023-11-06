#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);


	if(n > 0)
	{
		printf("\n--------------------------\n");
		printf("Number is positive !! ");
		printf("\n--------------------------\n");
	}
	else if(n==0)
	{
		printf("\n--------------------------\n");
		printf("number is nuteral !!");
		printf("\n--------------------------\n");
	}
	else
	{
		printf("\n--------------------------\n");
		printf("Number is negetive !!");
		printf("\n--------------------------\n");
	}

	getch();
}