#include<stdio.h>
main()
{
	char a[20],b[20];
	int len=0,i,j,f,n,pali=0;
	
	printf("enter any string : ");
	scanf("%s",&a);
	
	for(i=len;a[i]!=NULL;i++)
	{
		len++;
	}
	for(i=len-1; i>=0; i--)
	{
		b[n++] = a[i];
	}
	b[j++]=NULL;
	for(i=0; i<=len; i++)
	{
		if(a[i] != b[i])
		{
			f=1;
		}
	}
	if(f==0)
	{
		printf("palindrome !!");
	}
	else
	{
		printf("not palindrome !! ");
	}
	
}
