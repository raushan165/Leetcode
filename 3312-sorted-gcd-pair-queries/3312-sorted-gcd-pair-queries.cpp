class Solution  {
    public: vector<int> gcdValues(vector<int>& nums, vector<long long>& queries)  {
        int max_val = 0;
        for (int x : nums) max_val = max(max_val, x);
        vector<long long> count(max_val + 1, 0);
        for (int x : nums) count[x]++;
        vector<long long> H(max_val + 1, 0);
        for (int g = max_val; g >= 1; --g)  {
            long long count_multiples = 0;
            for (int k = g; k <= max_val; k += g) count_multiples += count[k];
            long long f_g = count_multiples * (count_multiples - 1) / 2;
            for (int k = 2 * g; k <= max_val; k += g) f_g -= H[k];
            H[g] = f_g;
        } vector<long long> prefix_sum(max_val + 1, 0);
        for (int i = 1; i <= max_val; ++i) prefix_sum[i] = prefix_sum[i - 1] + H[i];
        vector<int> result;
        for (long long q : queries)  {
            auto it = upper_bound(prefix_sum.begin(), prefix_sum.end(), q);
            result.push_back(distance(prefix_sum.begin(), it));
        } return result;
    }
};