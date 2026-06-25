class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool b = false;
        for(int i=0;i<31;i++){
            if (pow(2,i) == n){
                b = true;
                break;
            }
        }
        if (b){
            return true;
        }
        else{
            return false;
        }
    }
};