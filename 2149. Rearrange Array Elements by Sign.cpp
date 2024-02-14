 class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
//iterate with the size of ans1 or ans2 .
        for(int i=0;i<ans1.size();i++){
            ans.push_back(ans1[i]);
            ans.push_back(ans2[i]);
        }
        return ans;
        
    }
};
