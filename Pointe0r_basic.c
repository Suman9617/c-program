#include <stdio.h>//
int main()
{
    int a = 10, b = 9, c;//
    int *p = &a, *q = &b;
    printf("The value of a=%d\n", *p);
    printf("The value of b=%d", *q);

    return 0;
}
