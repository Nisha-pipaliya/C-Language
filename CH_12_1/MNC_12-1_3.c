#include<stdio.h>
 main()

{
	int n;
	printf("enter array's size :");
	scanf("%d",&n);
	printf("-------------------------------\n");
	int a[n],b[n],c[n],i;
	
	printf("enter any elements:\n");
	printf("---------------------------------\n");
	printf("enter A's element :\n");
	printf("==================\n");
	for(i=0; i<n; i++)
	{
	    printf("a[%d] : ",i);
	    scanf("%d",&a[i]);
	}
	printf("------------------------------\n");
	printf("\n");
	printf("enter B's ement :\n");
	printf("===================\n");
	for(i=0; i<n; i++)
	{
	    printf("b[%d] : ",i);
	    scanf("%d",&b[i]);
	   
	}
	for(i=0; i<n; i++)
	{
	    c[i]=a[i]+b[i];
	}
	printf("\n");
	printf("array c:");
	for(i=0; i<n ; i++)
	{
	    printf("%d ",c[i]);
	    
	}
}
