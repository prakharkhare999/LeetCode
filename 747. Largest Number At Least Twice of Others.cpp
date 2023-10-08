class Solution {
public:
    int dominantIndex(vector<int>& nums) {
//self impliment

        int  n=nums.size();
        int maxi=*max_element (nums.begin(), nums.end());
        bool ans=false;

//find maximum index
auto it = std::minmax_element(nums.begin(), nums.end());
int max_idx = std::distance(nums.begin(), it.second);
              
        for(int i=0;i<n;){


            if(nums[i]==maxi){
                i++;
            }
           else  if((2*nums[i])<=maxi){
                ans=true;
                i++;

                
            }else{
                return -1;
            }
            
        }
        if(ans==true ){
            return max_idx;
        }
       
        return 1;
    }
};
