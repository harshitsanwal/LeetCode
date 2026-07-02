bool isPalindrome(int x) {
   if(x<0)
   return false;
   long rev=0,a;
   int y=x;
   while(x)
   {
    a=x%10;
    rev=rev*10+a;
    x=x/10;
   }
   if(rev==y)
    return true;
 return false;
}