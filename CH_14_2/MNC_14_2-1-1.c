#include<stdio.h>
#include<string.h>

main()
{
	char psw[30];
	int i,len=0,cap=0,sml=0,dgt=0,sp=0,sym=0;
	
	printf("enter password : ");
	gets(psw);
	
	for(i=0; i<30; i++)
	{
		if(psw[i]>=65 && psw[i]<=90)
		{
			cap++;
		}
		 else if(psw[i]>=97 && psw[i]<=122)
		{
			sml++;
		}
		 else if(psw[i]>=48 && psw[i]<=57)
		{
			dgt++;
		}
		 else if(sp==' ')
		{
			sp++;
		}
		else
		{
			sym++;
		}
		len++
	}
	if(len>=8 && cpa>0 && smnl>0 && sp>0 && dgt>0 && sym>0)
	{
		puts("Password is strong  !! ");
		
	}
	else
	{
			puts("Password is  not strong  !! ");
	}
	
}
