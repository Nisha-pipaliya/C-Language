
#include<stdio.h>
#include<string.h>
main()
{

	FILE *p,*n;
//	char  n[30];

	p = fopen("C:\\Users\\r3\\Desktop\\write\\p.txt","w");
	n = fopen("C:\\Users\\r3\\Desktop\\read\\n.txt","w");

	fgets(n,30,p);
	printf("%s",n);
	fprintf(p,"%s",n);

	fclose(p);
	fclose(n);


}
