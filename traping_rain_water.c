#include<stdio.h>
int min(int x,int y){
    return (x>y)?y:x;
}
int trap(int height[], int heightSize) {
   int lmax[heightSize],rmax[heightSize],water=0; 
   lmax[0]=height[0];
   rmax[heightSize-1]=height[heightSize-1];
    for(int i=1;i<heightSize;i++)
    {  
        if(height[i]<lmax[i-1])
            lmax[i]=lmax[i-1];
         else{
            lmax[i]=height[i];
         }  
            
             
    } 
     for(int i=heightSize-2;i>=0;i--)
    { 
        if(height[i]>rmax[i+1])
            rmax[i]=height[i]; 
        else{
            rmax[i]=rmax[i+1];
        } 
        
             
    } 
    for(int i=0;i<heightSize;i++){
        water+=(min(rmax[i],lmax[i]))-height[i];
    }
   return water; 
}
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[7]={1,3,5,2,0,7,5};
    x=trap(arr,n);
    printf("%d",x);
}