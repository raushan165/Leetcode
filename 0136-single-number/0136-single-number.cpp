class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int uniqueElement = 0;
        for (int num : nums) {
            uniqueElement ^= num;
        }
        return uniqueElement;
    }
};