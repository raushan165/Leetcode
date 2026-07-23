class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i=0;
        int n = nums.size();
        int m = INT_MIN;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(nums[i] == nums[j]){
                    c++;
                }
                if(c > n/2){
                    return nums[i];
                }
            }
        }
        return 0;
    }
};