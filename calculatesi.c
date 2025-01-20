#include <stdio.h>
int main()
{
    int p, r;
    float t, si;
    printf("enter the amount interest rate and time\n");
    scanf("%d %d %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("simple interest=%f", si);
    return 0;
}