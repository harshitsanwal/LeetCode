class Solution {
public:
    bool search(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
        int  n=nums.size()-1;
        int start=0;
        int end=n;
        int mid =start+(end-start)/2;
        while(start<=end){
            if(target==nums[mid])
            return 1;
            else if(target>nums[mid])
            start=mid+1;
            else
            end=mid-1;
            mid=start+(end-start)/2;
        }
        return 0;
    }
    
};