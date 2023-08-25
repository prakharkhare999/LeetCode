class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int total_sum = 0;
        int total_digit_sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
        
            total_sum += nums[i];
            
            int n = nums[i], digit_sum = 0;
            
            
            while(n) {
                digit_sum += n % 10;
                n /= 10;
            }
            total_digit_sum += digit_sum;
        }
        
        return abs(total_digit_sum - total_sum);
    }
};
