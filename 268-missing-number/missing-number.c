int missingNumber(int* nums, int numsSize) {
    int s = 0,k=0;
   for(int i = 0 ; i <= numsSize ; i++)
   {
        s+=i;
   } 
   for(int i = 0 ; i < numsSize ; i++)
   {
        k+=nums[i];
   }
   int a = s-k;
   return a;

}