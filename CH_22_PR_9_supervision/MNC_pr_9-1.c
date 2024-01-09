#include<stdio.h>

void main()
{
	FILE *even,*odd;
	int i;
	
	even=fopen("C:\\Users\\123\\Desktop\\even even.txt","w");
	odd=fopen("C:\\Users\\123\\Desktop\\even odd.txt","w");
	
	
	for(i=50; i<70; i++)
	{
		if(i%2 == 0)
		fprintf(even,"%d ",i);
		
	
	else if(i%2 != 0)
	fprintf(odd,"%d ",i);
	
}
	fclose(even);
	fclose(odd);
}
