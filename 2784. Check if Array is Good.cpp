class Solution {
public:
    bool isGood(vector<int>& nums) {
        //self impliment->but not pass all test cases
        /*
        int n=nums.size();
        sort(nums.begin(),nums.end());

        if(nums[n-1]+1<nums.size()){
            return false;
        }

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[n-1]){
                return true;
            }

        }
        return false;
        */
      
        int n = nums.size() - 1;
        vector<int> cnt(201);
        for (int x : nums) {
            ++cnt[x];
        }
        cnt[n] -= 2;
        for (int i = 1; i < n; ++i) {
            --cnt[i];
        }
        for (int x : cnt) {
            if (x) {
                return false;
            }
        }
        return true;
    
        
    }
};
