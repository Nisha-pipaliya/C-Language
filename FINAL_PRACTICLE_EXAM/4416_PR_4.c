#include<stdio.h>
main()
{
	int n;
	
	printf("enter array size: ");
	scanf("%d",&n);
	
	printf("===========================\n");
	
	int a[20],b[20],i;
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}

	
		for(i=0; i<n; i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("===========================\n");
	
	for(i=0; i<n; i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	printf("A: element :");
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
	
	printf("\nB: element :");
	for(i=0; i<n; i++){
		printf("%d",b[i]);
	}
	printf("\n===========================\n");
	
	
}
