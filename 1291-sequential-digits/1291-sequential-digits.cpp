class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> output;
        for(int i=1;i<=9;i++){
            int num = 0;
            for(int j=i;j<=9;j++){
                num = num*10+j;
                if(num >= low && num <= high){
                output.push_back(num);
                }
            }
        }
        sort(output.begin(),output.end());
        return output;
    }
};