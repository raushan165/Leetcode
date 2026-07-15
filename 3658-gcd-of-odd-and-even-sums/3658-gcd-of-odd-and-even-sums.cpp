class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int limit = 2 * n;
        int oddSum = 0, evenSum = 0;

        for (int i = 1; i <= limit; i++) {
            if (i % 2 != 0) {
                oddSum += i;
            } else {
                evenSum += i;
            }
        }

        return gcd(oddSum, evenSum);
    }
};