#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	clrscr();

	printf("enter x : ");
	scanf("%d",&x);

	printf("enter y : ");
	scanf("%d",&y);

	if(x<y)
	{
		printf("\n--------------------------\n");
		printf("X is minimum !! ");
		printf("\n--------------------------\n");
	}
	else
	{
		printf("\n--------------------------\n");
		printf("y is minimum !!");
		printf("\n--------------------------\n");
	}



	getch();
}