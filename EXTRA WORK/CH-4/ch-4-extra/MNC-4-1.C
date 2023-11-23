#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
main()
{
	int n,p1,p2,p3,p4,p5,sum;
	float area,ta;
	clrscr();
	P("enter product : ");
	S("%d",&n);

	P("enter p1 price : ");
	S("%d",&p1);

	P("enter p2 price : ");
	S("%d",&p2);

	P("enter p3 price : ");
	S("%d",&p3);

	P("enter p4 price : ");
	S("%d",&p4);

	P("enter p5 price : ");
	S("%d",&p5);

	sum=p1+p2+p3+p4+p5;
	P("sum of all product price : %d\n",sum);

	area+=sum*=0.18;
	P("GST :%f\n",area);





	getch();
}