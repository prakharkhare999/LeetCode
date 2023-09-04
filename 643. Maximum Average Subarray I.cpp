class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, max_sum;
        for(int i = 0; i < k; i++) sum += nums[i];
        max_sum = sum;
        for(int i = k; i < nums.size(); i++){
            sum = sum - nums[i - k] + nums[i];
            max_sum = max(sum, max_sum);
        }
        return max_sum / double(k);
    }
};
