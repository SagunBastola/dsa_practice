bool isPalindrome(int x) {
    if(x<0)
    {
        return false;
    }
    int copy=x;
    long int rev=0;
    while(x!=0)
    {
        if((rev*10+x%10 )>INT_MAX && (rev*10+x%10 )<INT_MIN)
        {
            return false;
        }
        rev=rev*10+x%10;
        x/=10;
    }
    if(rev==copy)
    {
        return true;
    }
    return false;
}