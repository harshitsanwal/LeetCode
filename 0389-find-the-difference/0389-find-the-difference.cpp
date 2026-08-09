class Solution {
public:
    char findTheDifference(string s, string t) {
       int n=s.size();
       int n1=t.size();
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(n==0&&n1==1)
       return t[0];
       else{
        for(int i=0;i<n;i++){
            if(s[i]!=t[i])
            return t[i];
        }
       } 
       return t[n1-1];
    }
};