class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool incre=false;
        bool decre=false;

        //n-1 because of overflow
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                incre=true;
            }
            else if(nums[i]<nums[i+1]){
                decre=true;
            }

        }
        if(incre==true && decre==true){
            return false;
        }
        else{
            return true;
        }
return false;
        
    }
};
