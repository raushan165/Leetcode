class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, curr = 0, maxx = 0; 
        while(i<j){
            if(height[i] < height[j]){
                curr = height[i]*(j-i);
                i++;
            }
            else{
                curr = height[j]*(j-i);
                j--;
            }
            maxx = max(maxx, curr);
        }
        return maxx;
        
    }
};