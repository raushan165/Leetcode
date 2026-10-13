class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxsum = nums[0];
        int gmax = nums[0];
        for(int i=1;i<nums.size();i++){
            if(mxsum < 0){
                mxsum = nums[i];
            }
            else{
                mxsum += nums[i];
            }
            if (mxsum > gmax){
                gmax = mxsum;
            }
        }
        return gmax;
    }
};