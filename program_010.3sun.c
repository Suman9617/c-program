#include<stdio.h>
void swap(int*x,int *y){
    int team;
    team=*x;
    *x=*y;
    *y=team;
}
void sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }


}
void function(int arr[],int size){
    for(int i=0;i<size-1;i++){ 
        if(arr[i]==arr[i-1])
            continue;
        for(int j=size-1;j>i;j--){
             if(arr[j]==arr[j+1]){
                continue;
             }
            int sum=arr[i]+arr[j];
            for(int k=i+1;k<j;k++){
                if(sum+arr[k]==0){
                    printf("%d %d %d \n",arr[i],arr[j],arr[k]);
                    break;
                }
            }
        }
           
           }
    }

int main(){
   int n,res;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   } 
   sort(arr,n);
  function(arr,n);

  return 0;
}