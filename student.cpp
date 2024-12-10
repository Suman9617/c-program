#include<stdio.h>
int main()
{
	struct student {
		char name[50];
		int age;
		int marks;
	}std[100];
	int n;
	printf("Enter student number\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	
	printf("enter student name\n");
	scanf("%s",&std[i].name);
	printf("enter student age \n");
	scanf("%d",&std[i].age);
	printf("enter student marks\n");
	scanf("%d",&std[i].marks);

	}
	int team;
	char a[10];
	for(int i=0;i<n;i++){
		if(std[i+1].marks>std[i].marks)
	     {
	     	team=std[i].marks;
	     	std[i].marks=std[i+1].marks;
	     	std[i+1].marks=team;
	     	
	     	team=std[i].age;
	     	std[i].age=std[i+1].age;
	     	std[i+1].age=team;
	     	
	     //	a[10]=std[i].name;
	     //	*std[i].name=*std[i+1].name;
	     //	*std[i+1].name=a[10];
		 }
       
	
		
	}
	
	for(int i=0;i<n;i++){
	printf("student name is %s   age is :%d    marks is %f \n",std[i].name,std[i].age,std[i].marks);
	//printf("your bonus is %f\n",emp[i].salary*0.1);
	
	}
	
}

