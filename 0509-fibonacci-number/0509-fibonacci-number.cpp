class Solution {
public:
    unordered_map<int,int> same;
    int fib(int n) {
        if (n==0)
        return 0;
        else if(n==1||n==2)
        return 1;
        else{
            if(same.count(n))
            return same[n];
            return same[n]=fib(n-1)+fib(n-2);
        }
        
    }
};