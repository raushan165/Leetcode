class Solution {
public:
    string smallestSubsequence(string s) {
        int freq[26];
        bool valu[26];
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']--;
            if (valu[s[i] - 'a']) continue;
            while (!st.empty() && st.top() > s[i] && freq[st.top() - 'a'] > 0) {
                valu[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            valu[s[i] - 'a'] = true;
        }
        string str = "";
        while (!st.empty()) {
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};