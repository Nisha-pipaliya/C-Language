#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();

	printf("choose languase................\n");
	printf("1) english \n");
	printf("2) hindi\n");
	printf("3) gujrati \n");
	printf("enter your choice :");
	scanf("%d",&a);

	switch (a)
	{
		case 1:
			printf("\n1)forinternaet recharge\n");

			printf("2)for top up recharge\n");

			printf("3)for special recharge recharge\n");

			printf("enter your choice:\n");
			scanf("%d", &a);

			switch(a)
			{
				case 1:
					printf("\n you've successfully done internet recharge !!");
					break;
				case 2 :

				      printf("\n you've successfully done top up recharge !!");
				      break;

				case 3 :

				      printf("\n you've successfully done special recharge !!");
				      break;

			}
			break;

		case 2 :
			printf("\n\n1) internet recharge ke liye \n");

			printf("2) top up  recharge ke liye \n");

			printf("3) special  recharge ke liye \n");

			printf("enter your choice:");
			scanf("%d",&a);


			switch(a)
			{
				case 1:
					printf("\n apne safaltapurvak internet recharge kar liya hai !!");
					break;
				case 2 :

					printf("2) apne safaltapurvak  top up  recharge kar liye!! \n");
					break;
				case 3 :

				       printf("3) apne safaltapurvk special  recharge kar liye  hai !! \n");
					break;

			}
			break;

			case 3 :
				printf("\n1) internet  na recharge mate\n");

			       printf("2) top up  na recharge mate\n");

			       printf("3) special  recharge mate\n");

			       printf("enter your choice :");
			       scanf("%d",&a);
			switch(a)
			{
				case 1 :
					printf("\n 1) tamaru internet recharge safaltapurvak thai gyu che !!\n");
					break;
				case 2 :

					printf("2) tamaru top up  recharge safaltapurvak thai gyu che !!\n");
					break;

				case 3 :

					printf("3) tamaru special recharge safaltapurvak thai gyu che !!\n");
					break;


			}
			break;



			}
			getch();




