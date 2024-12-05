#include<stdio.h>
	int main (){
		
	struct product{
	char name[100];
	int id;
	int stock;
	}p[100];
	for(int i=0;i<3;i++){
	 	printf("enter product name\n");
	 	scanf("%s",&p[i].name);
	 	printf("enter product id\n");
	 	scanf("%d",&p[i].id);
	 	printf("enter product stock\n");
	 	scanf("%d",&p[i].stock);
}
			for(int i=0;i<3;i++){
				char ch[10];
				int a,b,c;
				printf("enter product name or id ");
				scanf("%s",&ch);
				scanf("%d",&a);
	 		if(p[i].name==ch&& p[i].id==a){
	 			printf("proudct name is %s stock here %d ",p[i].name ,p[i].stock);
	 			
			 }
			 printf("you purchase  so press 1");
			 scanf("%d",&b);
			 if(b){
			 	printf("enter quinty");
			 	scanf("%d",&c);
			 	if(p[i].stock>c){
			 		printf("your perchase successful %c quinty %s this proudct",c,p[i].name);
			 		p[i].stock-=c;
				 }
			 }
	 }
	 	for(int i=0;i<3;i++){
	 	printf("product name :%s\n",p[i].name);
	 	printf("product id :%d\n",p[i].id);
	 	printf("product stock %d\n",p[i].stock);
}
	
		
	
}
