class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        int n2 = nums2.size();
        for (int i = n2 - 1; i >= 0; i--) {
            int curr = nums2[i];
            while (!st.empty() && curr >= st.top()) {
                st.pop();
            }
            mp[curr] = st.empty() ? -1 : st.top();
            st.push(curr);
        }
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            result.push_back(mp[nums1[i]]);
        }
        return result;
    }
};