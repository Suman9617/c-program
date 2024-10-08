#include<stdio.h>
int main()
{
	int a=9,c=0,n=4,sum=0;
	for(int i=1;i<=n;i++)
	{c=c*10+a;
	printf("%d\n",c);
	sum=sum+c;
	}
	printf("%d\n",sum);
}
