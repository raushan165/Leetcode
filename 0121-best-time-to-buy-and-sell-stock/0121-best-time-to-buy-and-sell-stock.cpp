class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],maxx= INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(buy > prices[i]){
                buy = prices[i];
            }
            else{
                maxx = max(maxx, (prices[i]-buy));
            }
        }
        return maxx;
    }
};