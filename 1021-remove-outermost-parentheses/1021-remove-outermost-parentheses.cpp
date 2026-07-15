class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (b > 0) {
                    result += s[i]; 
                }
                b++; 
            } else {
                b--;
                if (b > 0) {
                    result += s[i]; 
                }
            }
        }
        return result;
    }
};
