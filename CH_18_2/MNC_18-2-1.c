#include<stdio.h>

int main()
{
	int arr[5]={11,12,13,14,15};
	int i,*ptr1,*ptr2,tem;
	
	printf("Original Array : ");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	
	ptr1=arr;
	ptr2=arr+4;
	
	while(ptr1<ptr2)
	{
		tem=*ptr1;
		*ptr1=*ptr2;
		*ptr2;tem;
		ptr1++;
		ptr2--;
	}
	printf("\n====================================\n");
	printf("\nReversed Array : ");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n====================================\n");
}
