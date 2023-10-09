class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    /* 

    //binary approach panding
     int n=nums.size();
        int s=0;
        int e=n-1;
         int mid=s+(e-s)/2;

         while(s<e){
             if(nums[mid]<target){
                 s=mid+1;

             }
             else if(nums[mid]>target){
                 e=mid-1;
             }

         }
         */




         //self implimented
         //firtly travel starts with start
         //then end
         int n=nums.size();
         vector<int>ans;
         

         for(int i=0;i<n;i++){
             if(nums[i]==target){
                 ans.push_back(i);
                 break;
             }

         }
         for(int i=n-1;i>=0;i--){
             if(nums[i]==target){
                 ans.push_back(i);
                 break;
             }
         }
if(ans.size()==0){
    return {-1,-1};
}

return ans;
    }
};
//t.c-<O(n)
