#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);
	printf("Enter d : ");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is maximum ! ");
			}
			else
			{
				printf("D is maximum ! ");
			}
		}
		else
		{
			printf("C is maximum ! ");
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is maximum ! ");
			}
			else
			{
				printf("D is maximum ! ");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is maximum ! ");
			}
			else
			{
				printf("D is maximum ! ");
			}
		}
	}



getch();
}
