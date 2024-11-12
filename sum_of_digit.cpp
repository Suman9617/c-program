#include<stdio.h>
int sum(int,int);
int main()
	{
	int n,d,s=0;
	printf("Enter a  Binary number\n");
	scanf("%d",&n);
	d=sum(n,s)	;
	printf("%d",d);
	}
int sum(int n,int s)
	{ int d;
		d=n%10;
		s=s+d;
		n=n/10;
		if(n==0)
		return s;
		else
		return sum(n,s);
			
	}
