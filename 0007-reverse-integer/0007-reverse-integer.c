int reverse(int x){
    long rev=0,a;
    
    while(x)
    {
        a=x%10;
        rev=rev*10+a;
        x=x/10;
    }
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0;
    }
    return rev;
}
