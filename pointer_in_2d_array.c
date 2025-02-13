#include<stdio.h>
int main()
{
    int a[2][5]={1,2,3,4,5,6,7,8,9,11};
    int *p,*q;
    p=a[0],q=a[1];
    printf("the value of a is =%d\n",*(p+1));
    printf("the value of a is =%d\n",*(q+2));
    //printf("the value of a is =%d\n",1[a]);

}