class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int store=0;
            
                store=nums[i];
                mini=min(store,mini);
            
        }
         for(int i=0;i<n;i++){
            int store=0;
            
                store=nums[i];
                maxi=max(store,maxi);
            
        }


for(int i=0;i<n;i++)
{
    if(nums[i]!=maxi && nums[i]!=mini){
        return nums[i];

    }
}        



return -1;
    }
};
