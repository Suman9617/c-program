#include<stdio.h>
int main()
{
	struct employee {
		char name[50];
		int id;
		int years;
		float salary;
	}emp[100];
	int n;
	printf("Enter employee number\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	
	printf("enter employee name\n");
	scanf("%s",&emp[i].name);
	printf("enter employee id\n");
	scanf("%d",&emp[i].id);
	printf("enter employee years\n");
	scanf("%d",&emp[i].years);
	printf("enter employee salary\n");
	scanf("%f",&emp[i].salary);
	}
	for(int i=0;i<n;i++){
		if(emp[i].years>=5)
	
	printf("employee name is %s   id is :%d    salary is %f \n",emp[i].name,emp[i].id,emp[i].salary);
	printf("your bonus is %f\n",emp[i].salary*0.1);
	
	}
	
}


