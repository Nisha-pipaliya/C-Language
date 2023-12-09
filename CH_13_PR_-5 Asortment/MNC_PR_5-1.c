
#include<stdio.h>
main()
{
	int n;
	printf("enter array's size : ");
	scanf("%d",&n);
	
	printf("\nENTER ELEMENT\n");
	
	int a[n],i;
	
	printf("enter array's elements : \n\n");
	
	for(i=0; i<=n; i++)
	{
		printf(" a[%d] : ",i);
		scanf("%d",&a[i]);		
	}
	printf("\n======NEGETIVE NUMBERS:======\n ");
	printf("negetive number from the array : ");
	
	for(i=0; i<n; i++)
	{
		
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
		
	}	
}
