class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        //self implimented
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=original;
        for(int i=0;i<n;i++){
            if(ans==nums[i]){
                ans=nums[i]*2;

            }
        }
        return ans;
    }
};
