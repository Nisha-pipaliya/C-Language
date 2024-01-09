#include<stdio.h>

struct stdent{
	int rollno;
	char name[20];
	float per;
	int total;
	int phy;
	int chem;
	int maths;	
};

void main()
{
	struct student s[n];
	int i;
	
	printf("enter n number of student :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter detail of student : %d",i+1);
		
		printf("enter roll no\t:\n");
		scanf("%d",&s[i].rollno);
		
		printf("enter roll no\t:\n");
		scanf("%s",&s[i].name);
	
	
		printf("enter roll no\t:\n");
		scanf("%d",&s[i].s.chem);
	
	
		printf("enter roll no\t:\n");
		scanf("%d",&s[i].s.phy);
	
	
		printf("enter roll no\t:\n");
		scanf("%d",&s[i].s.mathas);
	}
	
	for(i=0; i<=n; i++)
	{
		printf("%c\n s[i].name");
		printf("%d\n s[i].chem");
		printf("%d\n s[i].phy");
		printf("%d\n s[i].maths");
		
		
		ftotal = (total : %d\n s[i].chem+s[i].phy+s[i].maths);	
		per s[i].total/3.00;
		
		printf("Total : %d",s[i].total);
		printf("per : %.2f",s[i].per);
	}

