#include<stdio.h>

//SUM OD DIAGONAL ELEMENT 
main()
{
	int row,col;
	printf("Enter row size : ");
	scanf("%d",&row);
	printf("Enter column size : ");
	scanf("%d",&col);
	
	int a[row][col],i,j,count=1;
	float sum;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Diagonal Elements\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}		
		}
		printf("\n");
	}
	printf("The Sum of diagonal elements of an Array : %.2f",sum);
}
