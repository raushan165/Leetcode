class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fq = 1;
        int mx = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == mx){
                fq++;
            }
            else{
                fq--;
            }
            if(fq < 0){
                mx = nums[i];
                fq = 1;
            }
        }
        return mx;
    }
};