#include<stdio.h>
    int main()
    {
    	int p,c,m,total,cm;
    	printf("enter the value of p,c,m\n");
    	scanf("%d %d %d",&p,&c,&m);
    	total=p+c+m;
    	cm=c+m;
    	if(m>=65&&c>=50&&p>=55)
    	{
    	 if(total>=190||cm>=140)
		 printf("your are Qulify");
		 else
		 printf("your are not Qulify");
		 }
    	else
    	printf("your are not Qulify");
    	return 0;
	}
