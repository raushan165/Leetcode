class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        vector<int> nw = nums;
        int a=0,b=0;
        int i = 0;
        int j = nums.size()-1;
        sort(nums.begin(),nums.end());
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                a = nums[i];
                b = nums[j];
                break;
            }
            else if (sum < target) {
                i++;
            }
            else {
                j--;
            }
        }
        for(int i=0;i<nw.size();i++){
            if(nw[i] == a){
                res.push_back(i);
                a = -1e9;
            }
            else if(nw[i] == b){
                res.push_back(i);
                b = -1e9;
            }
        }
    return res;
    }
};