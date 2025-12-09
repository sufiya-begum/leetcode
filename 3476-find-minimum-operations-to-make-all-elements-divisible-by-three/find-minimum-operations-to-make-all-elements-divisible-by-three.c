int minimumOperations(int* nums, int numsSize) {
    int s=0;
    for(int i = 0 ; i < numsSize ; i++)
    {
        int x= nums[i]/3;
        int a=abs(((x+1)*3)-nums[i]);
        int b=abs((x*3)-nums[i]);
        if(a>b)
        s+=b;
        else
        s+=a;
    }
    return s;
}