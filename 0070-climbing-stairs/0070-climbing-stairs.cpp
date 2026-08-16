class Solution {
public:
        unordered_map<int,int>memory;
    int recursion(int m){
        if(m==0||m==1)
        return 1;
        if(memory.count(m))
        return memory[m];
        return memory[m]=(recursion(m-1)+recursion(m-2));
    }
    int climbStairs(int n) {
        int result=recursion(n);
        return result;
      }
};