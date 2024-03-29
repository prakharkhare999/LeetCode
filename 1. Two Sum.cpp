class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>p;
         for(int i=0; i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    p.push_back(i);
                    p.push_back(j);
                   

                }
                
            }
         }

      return p;
    }
};
//map
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            result.push_back(numToIndex[complement]);
            result.push_back(i);
            break;
        }
        numToIndex[nums[i]] = i;
    }
    
    return result;
}

//another approach
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i<nums.size(); i++) {
            if(mp.count(target-nums[i]))
                return {mp[target-nums[i]], i};
            mp[nums[i]] = i;
        }
        
        return {};
    }
};
