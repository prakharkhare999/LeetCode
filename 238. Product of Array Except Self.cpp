class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
   int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
       left[0] = 1;
    for (int i = 1; i < nums.size(); i++) {
      left[i] = left[i - 1] * nums[i - 1];
    }

    right[nums.size()- 1] = 1;
    for (int i = nums.size() - 2; i > -1; i--) {
      right[i] = right[i + 1] * nums[i + 1];
    }

    vector<int>ans(n);
    for (int i = 0; i < nums.size(); i++) {
      ans[i] = left[i] * right[i];
    }

    return ans;
    }
};
