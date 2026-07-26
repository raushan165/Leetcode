class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n,1);
        //prefix
        for(int i=1;i<n;i++){
            arr[i] = nums[i-1]*arr[i-1];
        }
        int suf = 1;
        for(int i=n-2;i>=0;i--){
            suf *= nums[i+1];
            arr[i] *= suf;
        }
        return arr;
    }
};