#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fd=NULL;
    char str[50];
    puts("enter your name:");
    scanf("%[^\n]",str);
    fd = fopen("text.txt", "w");
     if(fd==NULL){
        printf("error");
        exit(1);
     }
    fputs(str, fd);
    fclose(fd);
    return 0;
}