#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("A is minumum ! ");
		}
		else
		{
			printf("C is minimum ! ");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum !");
		}
		else
		{
			printf("C is minimum ! ");
		}
	}

	getch();

}