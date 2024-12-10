#include<stdio.h>
 enum suit{heart=1,diamond,spade,club };
 enum rank{one=1,two,three,four,five,six,sevsn,eight,nine,ten,joker,queen,king };
 int main(){
 	enum suit s;
 	enum rank r;
 	s=club;
 	r=one;
 	switch(s){
 		case 1: printf("heart\n");
 		        goto p;
			   // break;
		case 2:printf("diamond\n") ;
		       goto p;
		      // break;
 		case 3: printf("spade\n");
 		        goto p;
			   // break;
		case 4:printf("club\n") ;
		       goto p;
		      // break;
		p:
		switch(r){
			case 1:printf("one\n");
			case 2:printf("two\n");
			case 3:printf("three\n");
			case 4:printf("four\n");
			case 5:printf("five\n");
			case 6:printf("six\n");
			case 7:printf("seven\n");
		    case 8:printf("eight\n");
			case 9:printf("nine\n");
			case 10:printf("ten\n");
			case 11:printf("joker\n");
			case 12:printf("queen\n");
			case 13:printf("king\n");
			        break;
		}       
	 }
 }
