#include<stdio.h>
void strsum()
{
	char str[50];
	int i,len=0;
	
	printf("enter string :");
	scanf("%s",str);
	
	for(i=0; str[i]!=NULL; i++)
	{
		len++;
	}
	printf("\n======================================\n");
	printf("length of input string : %d",len);
	printf("\n======================================\n");
}
void main()
{
	strsum();	
}
