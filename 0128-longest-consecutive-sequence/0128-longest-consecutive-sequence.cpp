class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
     sort(nums.begin(),nums.end());
     int n=nums.size(),count=1,ans=1;
     for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1])
        continue;
        else if(nums[i]+1==nums[i+1]){
            count++;
        }
        else{
            if(ans<count)
            ans=count;
            count=1;
        }
     }
     if(ans<count)
       ans=count;
     return ans;

    }
};