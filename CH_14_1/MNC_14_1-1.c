#include<stdio.h>
main()
{
	char a[20],i;
	printf("Enter Character : ");
	scanf("%s",a);
	 
	 for(i=0; i<20; i++)
	 {
	 	if(a[i]>=97 && a[i]<=122)
	 	{
	 		a[i] -=32;
		 }
		
	 }
	 printf("Character : %s",a);
	
}
