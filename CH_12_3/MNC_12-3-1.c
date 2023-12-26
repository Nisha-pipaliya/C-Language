#include<stdio.h>
void Arraysum()
{
	int n;
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<n; i++){
		
		sum+=a[i];
		
	}
	printf("\n======================================\n");
	printf("Sum of array  : %d",sum);
	printf("\n======================================\n");
}
void main()
{
	Arraysum();
}

