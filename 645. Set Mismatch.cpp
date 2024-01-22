class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        int sum=0;
        for(auto x:nums){
            if(s.find(x)!=s.end()){
                ans.push_back(x);
            }
            else{
                s.insert(x);
                sum=sum+x;

            }
        }
        int n=nums.size();
        int t=(n*(n+1))/2;
        ans.push_back(t-sum);
        return ans;
    }
};
/// diff
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        
        int dup     = -1;
        int missing = -1;
        
        for(int i = 0; i<n; i++) {
            int num = abs(nums[i]);
            
            if(nums[num-1] < 0)
                dup = num;
            else
                nums[num-1] *= (-1);
        }
        
        for(int i = 0; i<n; i++) {
            if(nums[i] > 0) {
                missing = i+1;
                break;
            }
        }
        
        return {dup, missing};
    }
};

