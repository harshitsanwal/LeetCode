class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,sum=0;
        unordered_map<int,int> cnt;
        cnt[0]=1;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(cnt.count(sum-k))
            ans+=cnt[sum-k];
            cnt[sum]++;
        }
        return ans;
    }
};