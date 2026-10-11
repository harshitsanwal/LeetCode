class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count=0,ans=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            count=0;
            for(auto&p:accounts[i]){
                count=count+p;
            }
            if(count>ans)
            ans=count;
        }
        return ans;
    }
};