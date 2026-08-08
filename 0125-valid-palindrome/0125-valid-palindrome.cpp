class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0||n==1)
        return true;
        int i=0,j=n-1;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
            return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};