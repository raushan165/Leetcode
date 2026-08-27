class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(),maxi=0;
        int st=0,end=n-1;
        while(st<end){
            int l =0;
            if(height[st]>height[end]) l = height[end];
            else l = height[st];
            int b = end-st;
            maxi = max(maxi,l*b);
            if(height[st] < height[end]) st++;
            else end--;
        }   
        return maxi;     
    }
};