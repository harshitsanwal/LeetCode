class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        unordered_map<int,int>sample;
        int n=nums.size();
        for(int i=0;i<n;i++)
            sample[nums[i]]++;
        for(auto& p:sample)
            v.push_back({p.second,p.first});
            sort(v.begin(),v.end(),greater<pair<int,int>>());
            vector<int> ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);        
        return ans;
    }
};