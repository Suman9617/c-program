#include<stdio.h>
int main()
{
	float a;
	float b,c;
	printf("Enter the number a\n");
	scanf("%f",&a);
    printf("Enter the number a\n");
	scanf("%f",&b);
	printf(" c=1 for sum c=2 for differnce c=3 for multiply c=4 for devide enter c\n");	
	scanf("%f",&c);
	if(c==1)
      printf("the sum        of %f and %f is %f",a,b,a+b); 
    else if (c==2)
	printf("the differnce  of %f and %f is %f",a,b,a-b);
	else if(c==3)
	printf("the multiply   of %f and %f is %f",a,b,a*b);
	else if(c==4)
	printf("the devide     of %f and %f is %f",a,b,a/b); 
	else
	printf(" enter wrong key word");
	return 0;
}
