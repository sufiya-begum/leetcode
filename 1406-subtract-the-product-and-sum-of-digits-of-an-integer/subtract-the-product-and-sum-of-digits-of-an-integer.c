int subtractProductAndSum(int n) {
    int r,p=1,s=0;
    while(n>0)
    {
        r=n%10;
        p*=r;
        s+=r;
        n=n/10;
    }
    return (p-s);
}