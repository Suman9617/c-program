#include<stdio.h>
int main()
       {
      char grade;
      printf("Enter your grade\n");
      scanf("%c",&grade);
     if(grade=='E'||grade=='e')
     printf("your grade is excellent");
     else if(grade=='V'||grade=='v')
     printf("your grade is very good");
    else if(grade=='G'||grade=='g')
     printf("your grade is good");
    else if(grade=='A'||grade=='a')
     printf("your grade is avarage");
     else if(grade=='F'||grade=='f')
     printf("you are fail");
     else 
     printf("wrong input");
     return 0;
	  }
