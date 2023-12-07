#include<stdio.h>

//ADDITION & STORE ANY ARRAY
main()
{
	int row,col;
	printf("Enter row Size : ");
	scanf("%d",&row);
	printf("Enter Column Size : ");
	scanf("%d",&col);
	
	int a[row][col],b[row][col],c[row][col],i,j;
	printf("Enter A Elements : \n");
	for(i=0;i<row;i++)
	{ 
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j); 
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("Enter B Elements : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[row][col]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[row][col]=a[row][col]+b[row][col];
		}
	}
	
	printf("Addition\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",c[row][col]);
		}
		printf("\n");
	}
}
