#include<stdio.h>
// function
void cube(int r, int c,array[r][c])
{
	int *ptr
	int i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			ptr[i][j]=&array[i][j];
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",(*ptr[i][j]*(*ptr[i][j])*(ptr[i][j])));
		}
	}
}
// function call
main()
{
	int i,j,r,c,array[r][c],ptr;
	
	printf("enter array row : ");
	scanf("%d",&r);
	printf("enter array column : ");
	scanf("%d",&c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("array[%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("cube : array[%d][%d] : %d",i,j,cube(r,c,array[r][c]));
		}
	}

}
