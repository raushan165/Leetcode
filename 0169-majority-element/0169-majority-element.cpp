class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fq=1,maxel=nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxel == nums[i]){
                fq++;
            }
            else{
                fq--;
            }
            if(fq<0){
                maxel = nums[i];
                fq=0;
            }
        }
        return maxel;
    }
};