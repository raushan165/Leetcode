class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(),maxi=0;
        int st=0,end=n-1;
        while(st<end){
            int l =0;
            int b = end-st;
            if(height[st]>height[end]){
                l = height[end] ;
                end--;
            }
            else {
                l = height[st];
                st++;
            }
            maxi = max(maxi,l*b);
        }   
        return maxi;     
    }
};