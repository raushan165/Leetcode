class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int fq =1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                fq++;
            }
            else{
                fq = 1;
            }
            if(fq > nums.size()/2) return nums[i];
        }
        return fq;
    }
};