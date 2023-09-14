class Solution {
public:

string largestNumber(vector<int>& nums) {

 vector<string> nums_str;
    
    // Convert numbers to strings
    for (int num : nums) {
        nums_str.push_back(to_string(num));
    }
    
    // Sort the strings using the custom comparison function
    sort(nums_str.begin(),nums_str.end(),compareStrings);
        // Concatenate the sorted strings to form the largest number
    string result;
    for (string num_str : nums_str) {
        result += num_str;
    }
    
    // Remove leading zeros if any
    int i = 0;
    while (i < result.length() && result[i] == '0') {
        i++;
    }
    
    if (i == result.length()) {
        return "0";
    }

    return result;
        
    }
    public:
    static bool compareStrings(string a, string b) {
    return (a + b) > (b + a);
}
};
