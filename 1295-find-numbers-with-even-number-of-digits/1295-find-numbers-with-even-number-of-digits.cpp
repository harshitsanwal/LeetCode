class Solution {
public:
    int count(int a){
        int count=0;
        while(a){
            count++;
            a=a/10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int c=count(nums[i]);
            if(c%2==0)
                ans++;
        }
        return ans;
    }
};