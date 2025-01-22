int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
   int product=1,b,count=0;
   *returnSize=numsSize;
   int *ptr=( int*)malloc(numsSize*sizeof( int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            product*=nums[i];
        }
         else{
            count++;
            b=i;
         }
    }
    if(count==0){
        for(int i=0;i<numsSize;i++)
        {
            *(ptr+i)=product/nums[i];
        }
    }
    else if(count==1){
        for(int i=0;i<numsSize;i++)
        {
            if(i==b){
                *(ptr+i)=product; 
            }
            else
              *(ptr+i)=0; 
        }
    }
    else{
        for(int i=0;i<numsSize;i++)
        {
            *(ptr+i)=0;
        }
    }

  return ptr;
}
