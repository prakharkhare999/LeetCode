class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    int unique_sum = 0;
    for (const auto& [key, value] : freq) {
        if (value == 1) {
            unique_sum += key;
        }
    }
    return unique_sum;
}







    
};
