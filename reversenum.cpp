#include<stdio.h>
int main()
	{int num,team=0;
		printf("Enter a number\n");
		scanf("%d",&num);
		do{
			team=team*10+(num%10);
			num=num/10;
		}while(num>0);
		printf("%d",team);
		return 0;
	}
