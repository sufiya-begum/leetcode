int arraySign(int* nums, int numsSize) {
    int p = 0 , n = 0 , z = 0;
    for(int i = 0 ; i < numsSize ; i++)
    {
        if(nums[i]>0)
        p++;
        else if(nums[i]<0)
        n++;
        else
        z++;
    }
    if(z != 0)
    return 0;
    else if(n % 2 != 0)
    return -1;
    else 
    return 1;
}