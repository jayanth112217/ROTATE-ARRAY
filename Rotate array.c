void rotate(int* nums, int numsSize, int k){
  if(k==0 || k==numsSize)
    k=0;
  else if(k<numsSize){
    int* dummy = (int*)malloc(numsSize*sizeof(int));
    int temp = numsSize-k;
    for(int i=0;i<k;i++){
      dummy[i]=nums[temp];
      temp++;
    }
    temp = k;
    for(int i=0;i<(numsSize-k);i++){
      dummy[temp]=nums[i];
      temp++;
    }
    for(int i=0;i<numsSize;i++)
       nums[i]=dummy[i];
    free(dummy);
  }
  else if(k>numsSize){
   int rem = k%numsSize;
   int* dummy = (int*)malloc(numsSize*sizeof(int));
     int temp = numsSize-rem;
    for(int i=0;i<rem;i++){
      dummy[i]=nums[temp];
      temp++;
    }
    temp = rem;
    for(int i=0;i<(numsSize-rem);i++){
      dummy[temp]=nums[i];
      temp++;
    }
    for(int i=0;i<numsSize;i++)
       nums[i]=dummy[i];
    free(dummy);
  }
}