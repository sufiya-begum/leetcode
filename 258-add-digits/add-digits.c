int addDigits(int num) {
    int dsum = 0;
    while (num > 0)
    {
        int r= num % 10;
        dsum += r;
        num= num/10;
        if(num == 0 && dsum > 9)
        {
            num = dsum;
            dsum = 0;
        }
    }
    return dsum;
}