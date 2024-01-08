#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[50];
	int age;
	char course[20];
	char city[50];
	int std;
	char school[100];	
};
void main()
{
	
	printf("======================student 1===========================\n\n");
	struct Student s1;
	
	s1.id=120;
	strcpy(s1.name,"Aeni");
	s1.age=18;
	strcpy(s1.course,"fullstack devlopment");
	strcpy(s1.city,"surat");
	s1.std=10;
	strcpy(s1.school,"Ankur vidhyabhavn");
	
	printf("id\t: %d\n",s1.id);
	printf("name\t: %s\n",s1.name);
	printf("age\t: %d\n",s1.age);
	printf("course\t: %s\n",s1.course);
	printf("city\t: %s\n",s1.city);
	printf("std\t: %d\n",s1.std);
	printf("School\t: %s\n",s1.school);
	
	

	printf("========================student 2=========================\n\n");
	struct Student s2;
	
	s2.id=121;
	strcpy(s2.name,"rashmi");
	s2.age=16;
	strcpy(s2.course,"fullstack devlopment");
	strcpy(s2.city,"surat");
	s2.std=10;
	strcpy(s2.school,"Ankur vidhyabhavn");
	
	printf("id\t: %d\n",s2.id);
	printf("name\t: %s\n",s2.name);
	printf("age\t: %d\n",s2.age);
	printf("course\t: %s\n",s2.course);
	printf("city\t: %s\n",s2.city);
	printf("std\t: %d\n",s2.std);
	printf("School\t: %s\n",s2.school);
	
	
	printf("=======================student 3==========================\n\n");
	struct Student s3;
	
	s3.id=122;
	strcpy(s3.name,"purvi");
	s3.age=18;
	strcpy(s3.course,"fullstack devlopment");
	strcpy(s3.city,"surat");
	s3.std=10;
	strcpy(s3.school,"Ankur vidhyabhavn");
	
	printf("id\t: %d\n",s3.id);
	printf("name\t: %s\n",s3.name);
	printf("age\t: %d\n",s3.age);
	printf("course\t: %s\n",s3.course);
	printf("city\t: %s\n",s3.city);
	printf("std\t: %d\n",s3.std);
	printf("School\t: %s\n",s3.school);
}
