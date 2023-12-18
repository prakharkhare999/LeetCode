class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp;
        int n=nums.size();
        temp=(nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
        return temp;

    }
};
