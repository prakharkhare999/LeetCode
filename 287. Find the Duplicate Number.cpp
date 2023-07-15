class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      set<int>numSet;
        int temp;
        for (int num : nums) {
        // Check if the number is already present in the set
        if (numSet.count(num) > 0) {
            // Found the duplicate number
            return num;
            temp=num;
        } else {
            // Number is not a duplicate, add it to the set
            numSet.insert(num);
        }
    }
    return temp;

    }
};
