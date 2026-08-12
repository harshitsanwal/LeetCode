class Solution {
public:
int product(int j){
    int rev=1;
    while(j){
        int a = j%10;
        rev=rev*a;
        j=j/10;
    }
    return rev;
}
    int smallestNumber(int n, int t) {
       while(true){
            int r = product(n);
            if(r % t == 0)
                return n;
            n++;
        }
    }
};