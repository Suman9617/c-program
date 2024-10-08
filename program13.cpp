#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter your number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   printf("%d\n",i);
		sum=sum+i;
		i=i+1;
	}
	printf("the sum of  odd number %d\n",sum);
}
