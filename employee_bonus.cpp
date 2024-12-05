#include<stdio.h>
	int main (){
		
	struct employee{
	char name[100];
	int id;
	float salary;
	int year;
	}emp[100];
	for(int i=0;i<3;i++){
	 	printf("enter employee name\n");
	 	scanf("%s",&emp[i].name);
	 	printf("enter employee id\n");
	 	scanf("%d",&emp[i].id);
	 	printf("enter employee salary\n");
	 	scanf("%f",&emp[i].salary);
	 	printf("enter employee year of service\n");
	 	
	 	scanf("%d",&emp[i].year);
}
			for(int i=0;i<3;i++){
	 		if(emp[i].year>5){
	 			printf(" employee %s you are eligigible for the bonus\n",emp[i].name);
	 			printf ("your bouns is %.2f\n ",emp[i].salary*0.1);
			 }
	 }
	
		
	
}
