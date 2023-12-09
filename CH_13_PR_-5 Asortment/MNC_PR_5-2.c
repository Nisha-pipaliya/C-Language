#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter column size : ");
	scanf("%d",&c);
	
	printf("\n=============================\n");
	
	int a[r][c],i,j,count=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);		
		}
	}
	for(i=0; i<r; i++)
	{
		for(i=0; i<r; i++)
		{
			if(a[i][j]> count)
			{
				count=a[i][j];
			}
		}
		
	}
		printf("\n=============================\n");
	printf("largeast no : %d",count);
	
	
	
}
