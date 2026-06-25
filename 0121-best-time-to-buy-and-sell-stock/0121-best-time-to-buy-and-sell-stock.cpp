class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pr = 0;
        int min_pr = prices[0];
        for(int i=0;i<prices.size();i++){
            if((prices[i]) < min_pr){
                min_pr = prices[i];
            }
            else if (prices[i]-min_pr>max_pr){
                max_pr = prices[i]-min_pr;
            }
        }
        return max_pr;
    }
};