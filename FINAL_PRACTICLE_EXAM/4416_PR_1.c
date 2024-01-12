#include<stdio.h>

void main()
{
	int r,c;
	printf("enter array row :");
	scanf("%d",&r);
	
	printf("enter array column :");
	scanf("%d",&c);
	
	printf("\n=====================================\n");
	
	int a[r][c],i,j,sum=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n=====================================\n");
	printf("\nDaigonal element\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j){
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
	
	}
	printf("\n=====================================\n");
	printf("\nAnti-Daigonal element\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if((i+j)==r-1){
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n=====================================\n");
	printf("\nsum of daigonal & Anti-Daigonal : %d",sum);
	
}
