#include<stdio.h>
struct d
{
	int id,qty,price;
	char name[10];
	float dis;
};
main()
{
	FILE *f;
	
	f=fopen("E:\\4416_NISHA\\c-language\\FINAL_PRACTICLE_EXAM\\BILL\\bill.txt","w");
//	fclose(f);
	
	int n,i;
	
	printf("enter employee :");
	scanf("%d",&n);
	
	printf("=============================\n");
	
	struct d a[n];
	
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("Enter Id :");
		scanf("%d",&a[i].id);
		
		printf("Enter Name :");
		scanf("%s",&a[i].name);
		
		printf("Enter Price :");
		scanf("%d",&a[i].price);
		
		printf("Enter Qty :");
		scanf("%d",&a[i].qty);
		
		printf("Enter discount :");
		scanf("%.2f",&a[i].dis);
	}
	fprintf(f, "======\t\t======\t\t======\t\t======\t\t======\n");
	fprintf(f,"Id\t\tName\t\tPrice\t\tQty\t\tdiscount\n");
	for(i=0; i<n; i++)
	{
		fprintf(f, "%d\t\t%s\t\t%d\t\t%d\t\t%.2f",a[i].id,a[i].name,a[i].price,a[i].qty,a[i].dis);
		fprintf(f, "\n");
	}
	fprintf(f, "======\t\t======\t\t======\t\t======\t\t======\n");
	
	fprintf(f, "======\t\t======\t\t======\t\t======\t\t======\n");
	fprintf(f, "Id\t\tName\t\tPrice\t\tQty\t\tdiscount\n");
	for(i=0; i<n; i++)
	{
		fprintf(f, "%d\t\t%s\t\t%d\t\t%d\t\t%.2f",a[i].id,a[i].name,a[i].price,a[i].qty,a[i].dis);
		fprintf(f, "\n");
	}
	fprintf(f, "======\t\t======\t\t======\t\t======\t\t======\n");
	
}
