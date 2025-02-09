#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fd=NULL;
    char str[50];
    scanf("%[^\n]",str);
    fd = fopen("text.txt", "w+");
     if(fd==NULL){
        printf("error");
        exit(1);
     }
  //  fgets(str,45,fd);
    fputs(str, fd);
    fclose(fd);
    printf("%s",str);
    return 0;
}
