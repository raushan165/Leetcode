class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for (int i = 0; i < s.size(); ) {
            if (s[i] == '#') {
                if (i > 0) {
                    s.erase(i - 1, 2);   
                    i--;
                } else {
                    s.erase(i, 1);      
                }
            } else {
                i++;
            }
        }
        for (int i = 0; i < t.size(); ) {
            if (t[i] == '#') {
                if (i > 0) {
                    t.erase(i - 1, 2);
                    i--;
                } else {
                    t.erase(i, 1);
                }
            } else {
                i++;
            }
        }
        return s == t;
    }
};