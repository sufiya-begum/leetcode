

int numberOfMatches(int n){
    int m = 0;
    int t;
    while(n != 1)
    {
    if(n % 2 == 0)
    {
        m += n/2;
        t = n/2;
    }
    else if(n % 2 != 0)
    {
        m += n/2;
        t = (n/2)+1; 
    }
    n = t;
    }
    return m;
}