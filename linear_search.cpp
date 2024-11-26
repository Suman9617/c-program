#include<stdio.h>
 int main(){
 	int a[6]={1,2,3,4,5,6};
 	int sum=0,n,p=1;
 	printf("Enter a number\n");
 	scanf("%d",&n);
 	for(int i=0;i<6;i++)
 	{ if(a[i]==n)
    	{
 		  printf("number is here %d\n",i);
 		  p=0;
 		  break;
	    }
 		
	 }
	 if(p)
	 {
	 	printf("number is not here\n");
	 }
 	
 }
