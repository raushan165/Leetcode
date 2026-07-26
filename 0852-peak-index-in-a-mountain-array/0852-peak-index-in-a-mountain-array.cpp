class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        int st=1,end =n-2;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]>nums[mid+1] && nums[mid] > nums[mid-1]){
                return mid;
            }
            else if(nums[mid]<nums[mid-1]){
                end = mid-1;
            }
            else if (nums[mid]<nums[mid+1]){
                st = mid+1;
            }
        }
        return 0;
    }
};