class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unq = 0;
        for(int i:nums){
            unq ^= i;
        }
        return unq;
    }
};