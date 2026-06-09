int countNumbersWithUniqueDigits(int n) {
    if(n == 0) return 1;
    int res=10;
    int unique = 9;
    int avail= 9;
    while(n>1 && avail >0)
    {
        unique *= avail;
        res += unique;
        avail--;
        n--;
    }
    return res;
}