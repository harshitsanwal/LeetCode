class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
            ans[arr[i]]++;
        int lucky=-1;
        for(auto &p : ans){
        if(p.first==p.second)
          lucky=max(lucky,p.first);
  }
  return lucky;
 }
};