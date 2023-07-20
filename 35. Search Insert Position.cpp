class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        //self impliment
         int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
              if(nums[mid]>target){
                e=mid-1;
            }
              if(nums[mid]<target){
                s=mid+1;
            }
           
            mid=s+(e-s)/2;
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
            j=j+1;
            }
            
        }
        return j;

    }
    
    
};
