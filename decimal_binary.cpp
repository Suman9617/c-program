//binary to decimal 
#include<stdio.h>
int dtb(int,int);
int main()
	{
	int n,d,num=0;
	printf("Enter a  Binary number");
	scanf("%d",&n);
	d=dtb(n,num)	;
	printf("%d",d);
	}
	int dtb(int n,int num)
	{
	
		num=n%2+num*10;
		n=n/2;
	
		 if(n==1)
		return num*10+1;
		else
		return dtb(n,num);
	}
