class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0, start =0, maxLen =0;
        int n= nums.size();
        for(int end = 0;end < n;end++){
            if(nums[end] == 0){
                zeros++;
            }
            while(zeros>k){
                if(nums[start] == 0) zeros--;
                start++;
            }
            maxLen = max(maxLen, end-start+1);
        }
        return maxLen;
    }
};