int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max_sum = 0 ;
    for(int i = 0 ; i < accountsSize ; i++)
    {
        int s= 0 ;
        for(int j = 0 ; j < *accountsColSize ; j++)
        {
            s = s + accounts[i][j];
        }
        if(s > max_sum)
        max_sum = s;
    }
    return max_sum;
}