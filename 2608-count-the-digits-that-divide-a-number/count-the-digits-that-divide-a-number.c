int countDigits(int num) {
    int r,k,c=0;
    k=num;
    while(num>0)
    {
        r=num%10;
        if(k%r==0)
        c++;
        num=num/10;
    }
    return(c);
}