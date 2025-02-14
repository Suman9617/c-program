#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    int *p=a,*q=&a[5];
    p=p+5,q=q-2;
    *p=25;
    printf("the value of a is =%ld\n",p-q);
    printf("the value of a is =%d\n",*p);
    printf("the address of p is =%d\n",p);
    printf("the value of a is =%d\n",*q);
    printf("the address of q is =%d\n",q);

}