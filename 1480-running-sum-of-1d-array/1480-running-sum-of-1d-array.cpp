class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size(),count=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            count=count+nums[i];
            ans.push_back(count);
        }
        return ans;
    }
};