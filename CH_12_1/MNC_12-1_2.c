#include<stdio.h>
main()
{
	
		int n;
		float sum=0,ave; 
		
		printf("enter array size : ");
		scanf("%d",&n);
		
		int a[n],i;
		
		for(i=0; i<=n; i++)
		{
			
			printf("Enter element a[%d] : ",i);
			scanf("%d",&a[i]);
			sum+= a[i];
		}
		ave = sum/n;

		printf("average of an array : %.2f",ave);
	

}

	
	
	

		
		

