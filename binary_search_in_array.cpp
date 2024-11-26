#include<stdio.h>
 int main(){
 	int a[6],team,n,p=1;
 	printf("Enter array element\n");
 	for(int i=0;i<6;i++)
 	{
 		scanf("%d",&a[i]);
	 }
 	
 	for(int i=0;i<6;i++)
 	{ for(int j=i+1;j<6;j++)
 	  if(a[i]>a[j]){
 	  	 
 	  	 team=a[i];
 	  	 a[i]=a[j];
 	  	 a[j]=team;
	   }
 		
	 }
	 
	 for(int i=0;i<6;i++){
	 	printf("%d\t",a[i]);
	 }
	 printf("\nEnter a number\n");
	 scanf("%d",&n);
	 int down=0,top=6;
	 for(int i=0;i<6;i++)
	 {
	 
	 	if(a[(top+down)/2]==n)
	 	{
		 printf("number is  here\n");
		 p=0;
	 	break;}
	 
	 	
	 	if(a[(top+down)/2]<n)
	 	{
	 		down=(top+down)/2;
	 	//	i=(top+down)/2;
		 }
		 if(a[(top+down)/2]>n)
	 	{
	 		top=(top+down)/2;
	 	//	i=(top+down)/2;
		 }
	 }
	 if(p)
	 	printf("number is not here\n");
	 
 }
