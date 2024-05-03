 
 class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        
        for(auto &i : nums1) {
            mp1[i]++;
        }
        
        for(auto &i : nums2) {
            mp2[i]++;
        }
        
        for(auto &pair : mp1) {
            if(mp2.find(pair.first) == mp2.end()) {
                ans[0].push_back(pair.first);
            }
        }
        
        for(auto &pair : mp2) {
            if(mp1.find(pair.first) == mp1.end()) {
                ans[1].push_back(pair.first);
            }
        }

        return ans;
    }
};
