class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>memo;
       int n=arr.size();
       for(int i=0;i<n;i++){
        memo[arr[i]]++;
       }
       unordered_set<int>seen;
       for(auto &p:memo){
        if(!seen.insert(p.second).second)
        return false;
       }
       return true;
    }
};