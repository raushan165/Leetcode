class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0,j=n-1,curr=0,ma = 0;
        while( i < j){
            int wp = j-i;
            int h = min(height[i],height[j]);
            curr = wp*h;
            ma = max(ma,curr);
            height[i] > height[j] ? j-- : i++;
        }
    return ma;
    }
};