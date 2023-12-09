
#include<stdio.h>

main()
{
	int r,c;
	
	
		printf("Enter Array Row:");
		scanf("%d",&r);
		printf("Enter Array Column:");
		scanf("%d",&c);
		
		printf("================================\n");
	
	int a[r][c],i,j,b[r][c];			
	
		for(i=0;i<r;i++)
		{	
			for(j=0;j<c;j++){
			
				printf("Enter a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
	}
	
			printf("========Transpose matrix ========\n");
	
		for(i=0;i<r;i++)
		{	
			for(j=0;j<c;j++){
			
					b[j][i]=a[i][j];		
			    }
		}
		for(i=0;i<r;i++)
		{	
			for(j=0;j<c;j++){
			
				printf("%d ",b[i][j]);
				}
				printf("\n");
	}
}
