#include<stdio.h>
void swap(int *a , int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
	
	printf("A\t:%d\nB\t:%d\n",*a,*b);
}
main()
{
	
	int x,y;
	printf("enter X : ");
	scanf("%d",&x);
	
	printf("enter Y : ");
	scanf("%d",&y);
	
	swap(&x,&y);
		
}
