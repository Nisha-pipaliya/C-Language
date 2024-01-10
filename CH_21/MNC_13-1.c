#include<stdio.h>
main()
{
	FILE *r;
	int i;

	r = fopen("C:\\Users\\r3\\Desktop\\div\\div.txt","w");

	for(i=1;i<=50;i++)
	{

		if(i%3==0 && i%5==0)
		{
			fprintf(r,"%d\n",i);
		}

	}
	fclose(r);

}
