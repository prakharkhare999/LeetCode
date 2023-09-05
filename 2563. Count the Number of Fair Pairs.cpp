class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
      /*
       vector<int>v;
        for(int i=0;i<=nums.size();i++){
            for(int j=i+1;j<=nums.size();j++){
                
if(0<=i  && i<j && j<nums.size() && nums[i]+nums[j]>=lower  && nums[i]+nums[j]<=upper){

                
                    v.push_back(i);
                    v.push_back(j);

                
}
            }
        }
        long long size=v.size()/2;
        return size;

*/







        long long ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            auto j = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
            auto k = lower_bound(nums.begin() + i + 1, nums.end(), upper - nums[i] + 1);
            ans += k - j;
        }
        return ans;





    }
};
