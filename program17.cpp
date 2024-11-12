#include<stdio.h>
int main()
{
	float n,c,sum=0;
	printf("enter your number\n");
	scanf("%f",&n);
	
	for(float i=1.0;i<=n;i++)
	{c=1/(i*i*i);
	printf("%.2f\n",c);
	sum=sum+c;
	}
	printf("%.2f\n",sum);
}

