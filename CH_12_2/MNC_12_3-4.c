#include<stdio.h>

//SUM OF BOUNDARY ELEMENT 
main()
{
	int row,col;
	
	printf("Enter row size :");
	scanf("%d",&row);
	printf("Enter column size : ");
	scanf("%d",&col);
	
	int a[row][col],i,j;
	float sum;
	
	printf("Enter Array Elements \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("BORDER\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0 || j==0 || i==row-1 || j==row-1 )
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf("  ");
			}
		}  
		printf("\n");
	}
	printf("The Sum of boundary elements of an Array : %.2f",sum);
}
