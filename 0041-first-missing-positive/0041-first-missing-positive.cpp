class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==count)
            count++;
        }
        return count;
    }
};