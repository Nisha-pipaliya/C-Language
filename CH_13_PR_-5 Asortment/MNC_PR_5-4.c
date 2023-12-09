
#include<stdio.h>

main()
{
	int r,c,sum=0;
	
	
		printf("Enter Array Row:");
		scanf("%d",&r);
		printf("Enter Array Column:");
		scanf("%d",&c);
		
		printf("\n===============================\n");
	
	int a[r][c],i,j,n1,n2;			
	
		for(i=0;i<r;i++)
		{	
			for(j=0;j<c;j++){
			
				printf("Enter a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
	}
			printf("\n===============================\n");
	printf("\n");
	printf("Enter Array Row :");
	scanf("%d",&n1);
	
	for(i=n1;i<=n1;i++)
		{	
			printf("Elements Of Row %d :",i);
			for(j=0;j<c;j++){
			
				printf("%d ",a[i][j]);
				sum+=a[i][j];
				
			}
			printf("\nSum Of Row %d :%d",i,sum);
	}
	printf("\n");
	printf("\n");
	printf("Enter Array Columns :");
	scanf("%d",&n2);		
	
		for(j=n2;j<=n2;j++)
		{	
			printf("Elements Of Columns %d :",j);
			for(i=0;i<r;i++){
				
				printf("%d ",a[i][j]);
				sum+=a[i][j];
				
			}
			printf("\nSum Of Columns %d :%d",j,sum);
		
	}
		

}
