class Solution {
public:
    bool divideArray(vector<int>& nums) {

//self impliment
      
sort(nums.begin(),nums.end());
        int n=nums.size();
        int divide=n/2;
        vector<int>ans;

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                ans.push_back(nums[i+1]);
                i++;
            }

        }

      /*
        if(divide==ans.size()/2){
      return true;
      }
      else{
        return false;
      }
      */
        return divide==ans.size()/2;
      
         
    }
};
