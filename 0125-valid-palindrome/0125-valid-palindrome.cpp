class Solution {
public:
    bool isPalindrome(string s) {
        string ne;
            for (char c: s){
                if (isalnum(c)){
                    ne += tolower(c);
                }
            }
            int left =0 ;
            int right = ne.size()-1;
            while(left < right){
                if(ne[left] != ne[right]){
                    return false;
                }
                left ++;
                right --;
            }
            return true;
        }
};