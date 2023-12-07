#include<stdio.h>

//AVERAGE
main()
{
	int row,col;
	
	printf("Enter row size : ");
	scanf("%d",&row);
	printf("Enter column size : ");
	scanf("%d",&col);
	
	int a[row][col],i,j;
	float sum,avg;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum+=a[i][j];
		}
	}
		avg=sum/(row*col);
		printf("Average : %.2f",avg);
		printf("\n");
}
