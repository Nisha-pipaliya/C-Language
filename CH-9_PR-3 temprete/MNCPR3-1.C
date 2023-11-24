#include<stdio.h>
#include<conio.h>

main()
{
	char i='a';
	clrscr();
	do
	{
		printf("%c",i);
		R+=4;
	}
	while(i<='z');
	getch();
}