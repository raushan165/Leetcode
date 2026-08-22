class Solution {
    public boolean checkDivisibility(int n) {
        int num =n;
        int sum=0,mul=1;
        while(n>0){
            sum += n%10;
            mul *= n%10;
            n=n/10;
        }
        sum += mul;
        if(num%sum == 0) return true;

        return false;
    }
}