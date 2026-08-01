class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans(n+1);
       for(int i=0;i<=n;i++){
        int m=i;
        int count=0;
        while(m){
           count+=(m&1);
           m=m>>1;
        }
        ans[i]=count;
       } 
       return ans;
    }
};