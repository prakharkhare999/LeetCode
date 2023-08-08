class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//self brute 
//but the optimal blow your mind


      //brute force
        // int size=nums.size();
        // for(int i=0;i<size;i++){
        //     for(int j=i+1;j<size;j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
                

        //     }
           
        // }
        // return false;

        //

       set<int> myset(nums.begin(), nums.end());
        return myset.size() < nums.size();
        
        
    }
};
