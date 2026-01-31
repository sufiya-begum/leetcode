/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
            int max=candies[0];
             bool* res = malloc(candiesSize*sizeof(bool));
                *returnSize = candiesSize;
    for(int i = 0 ; i < candiesSize ; i++)
    {
        if(candies[i] >= max)
        {
            max=candies[i];
        }
    }
    for(int i = 0 ; i < candiesSize ; i++)
    {
        if(candies[i]+extraCandies >= max)
            res[i]=true; 
            else
          res[i]= false;
    }
    return res;
}