class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> memo;
        int n=sentence.size();
        for(int i=0;i<n;i++){
            memo[sentence[i]]++;
        }
        if(memo.size()==26)
        return 1;
        return 0;
    }
};