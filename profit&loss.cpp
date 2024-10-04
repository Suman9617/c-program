#include<stdio.h>
 	int main()
 	{
 		int cp,sp,pl;
 		printf("Enter your cp and ap \n");
 		scanf("%d %d",&cp,&sp);
 		pl=sp-cp;
 		if(pl>0)
 		printf("your profit is %d",pl);
 		else if(pl<0)
 		printf("your lose is %d",-1*pl);	
 		else
 		printf("no profit no loss");
 		return 0;
	 }
