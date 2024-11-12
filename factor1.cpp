#include<stdio.h>
int fact(int);
int main()
	{
	int n,d;
	printf("Enter a  Binary number");
	scanf("%d",&n);
	d=fact(n)	;
	printf("%d",d);
	}
int fact(int a)
	{
		if(a==0)
		return 1;
		else if(a==1)
		return 2;
		else
		{
			return 2*fact(a-1);
		}
	}
