#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    int *p;
    p=a;
    printf("the value of a is =%d\n",*(a+1));
    printf("the value of a is =%d\n",*(p+1));
    printf("the value of a is =%d\n",1[a]);

}