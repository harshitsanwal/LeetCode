class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push_back(c);
            } else {
                if (st.empty()) return false;
                char last = st.back();
                if ((c == ')' && last != '(') ||
                    (c == ']' && last != '[') ||
                    (c == '}' && last != '{')) {
                    return false;
                }
                st.pop_back();
            }
        }
        return st.empty();
    }
};