class Solution {
public:
    bool is_pos(vector<int> &arr, int n, int m, int mid){
        int cows = 1, lst_stl_pos=arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i]-lst_stl_pos >= mid){
                cows++;
                lst_stl_pos = arr[i];
            }
            if(cows == m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int st = 1, end = position[n-1]-position[0], ans=-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(is_pos(position,n,m,mid)){
                st = mid+1;
                ans = mid;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};