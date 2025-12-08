int averageValue(int* nums, int numsSize) {
    int s = 0 ,c = 0;
    for (int i = 0 ; i < numsSize ; i++)
    {
        if(nums[i]%2 == 0 && nums[i]%3 == 0)
        {
            s+=nums[i];
            c++;
        }
    }
    if(c != 0){
      return s/c;
    }
    else 
    return 0 ;
  
}