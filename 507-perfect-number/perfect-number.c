bool checkPerfectNumber(int num) {
    int sum = 0 ;
    for(int i = 1 ; i < sqrt(num) ; i++)
    {
        if(num % i == 0)
        {
            sum += i;
            sum+=(num/i);
        }
        printf("%d\n",sum);
    }
    sum-=num;
    if(sum == num )
   return true;
    else 
   return false;
   
}