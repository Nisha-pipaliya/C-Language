#include<stdio.h>
main()
{
	int y1 , y2;
	printf("enter the first year : ");
	scanf("%d",&y1);
	printf("enter the second year : ");
	scanf("%d",&y2);
	
	int a[y2-y1],i,size=0;
	printf("The array is : ");
	for(i=y1; i<=y2; i++)
	{
		if(i%4==0)
		{
			a[size]=i;
			size++;
			
		}
	}
	for(i=0; i<size; i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
	}
}
