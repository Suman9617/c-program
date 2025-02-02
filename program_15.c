// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
#include<stdio.h>
#include <math.h>
int fact(int n){
    if(n==1)
     return 1;
   return n*fact(n-1);   
}
int com(int x,int y){
    return fact(x)/(fact(y)*fact(x-y));
}


int main(){
   int arr[] = {-1,0,1,2,-1,-4};
   int size=sizeof(arr)/sizeof(int);
   int combo=com(size,3);
   printf("%d",combo);
   for(;combo!=0;combo--)
   {
    
   }
    return 0; 
}