class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        vector<int>v;
        //self impliment->pair return krne to agar 6 element hue 3 pair to half kia
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v.size()/2;
    }
};
