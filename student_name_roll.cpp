#include<stdio.h>
int main()
{
	struct student {
		char name[10];
		int roll;
	}std1;
	printf("enter student name\n");
	scanf("%s",&std1.name);
	printf("enter student roll\n");
	scanf("%d",&std1.roll);
	printf("student name is %s and roll no is :%d\n",std1.name,std1.roll);
	
}


