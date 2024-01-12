#include<stdio.h>

main()
{
	int f1=0,f2=1,f,i,n;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	printf("==========================");
	
	printf("\n %d %d",f1,f2);
	
	for(i=2; i<n; ++i)
	{
		f=f1+f2;
		printf(" %d",f);
		f1=f2;
		f2=f;
	}
	printf("\n==========================");
}
