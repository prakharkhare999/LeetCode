class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        //self implimented
        int n=nums.size();
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
       
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        


        for(int i=0;i<even.size();i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }

return ans;
    }
};
