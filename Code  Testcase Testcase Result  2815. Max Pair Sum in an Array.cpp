class Solution {
public:
    int maxSum(vector<int>& nums) {
          std::unordered_map<int, int> maxDigits;  // Stores the maximum digit for each digit (0-9)
    int maxSum = -1;  // Initialize the maximum sum to -1

    for (int num : nums) {
        int maxDigit = 0;  // Initialize maxDigit to the smallest digit (0)
        int tempNum = num;

        // Find the maximum digit in num
        while (tempNum > 0) {
            maxDigit = std::max(maxDigit, tempNum % 10);
            tempNum /= 10;
        }

        // Update maxDigits if the current number has a larger maximum digit
        if (maxDigits.find(maxDigit) != maxDigits.end()) {
            maxSum = std::max(maxSum, maxDigits[maxDigit] + num);
            maxDigits[maxDigit] = std::max(maxDigits[maxDigit], num);
        } else {
            maxDigits[maxDigit] = num;
        }
    }

    return maxSum;

    }
};
