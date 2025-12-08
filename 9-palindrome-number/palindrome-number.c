bool isPalindrome(int x) {
    int r; long long s = 0;
    int k = x;
    while(x>0)
    {
        r = x % 10;
        s = s*10 + r;
        x = x / 10;
    }
    if(k == s)
    return true;
    else
    return false;
}