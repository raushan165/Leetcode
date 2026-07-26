class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int cal = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return (nums[n-1]*nums[n-2]*nums[n-3]) > (nums[0]*nums[1]*nums[n-1]) ?  nums[n-1]*nums[n-2]*nums[n-3] : nums[0]*nums[1]*nums[n-1];
    }
};