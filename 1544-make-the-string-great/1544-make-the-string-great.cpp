class Solution {
public:
    string makeGood(string s) {
        string st;
        if (s.size() == 1) return s;
        for(char c:s){
            if(!st.empty() && abs(st.back() -c) == 32){
                st.pop_back();
            }
            else{
                st.push_back(c);
            }
        }
        return st;
    }
};