class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //self implimented
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            nums[i]=pow(nums[i],2);
            v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        return v;

    }

};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           nums[i]= nums[i]*nums[i];
        }
         sort(nums.begin(),nums.end());
         return nums;
    }
};
