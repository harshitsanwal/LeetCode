class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>memory;
        int n=s.size();
        int start=0,ans=0;
        for(int i=0;i<n;i++){
            if(memory.find(s[i])!=memory.end() && memory[s[i]]>=start){
                start=memory[s[i]]+1;
            }
            memory[s[i]]=i;
            if(ans<i-start+1)
            ans=i-start+1;
        }
        return ans;
    }
};