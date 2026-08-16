class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fq=0,num = 0;
        for(int i=0;i<nums.size();i++){
            if(fq == 0) num = nums[i];
            if(nums[i] == num){
                fq++;
            }
            else{
                fq--;
            }
        }
        return num;
    }
};