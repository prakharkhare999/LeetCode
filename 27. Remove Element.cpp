class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        //only finds these elements who does not equal to the target.
        //those who not equal to the val place the ith place .

        for(int i=0;i<nums.size();i++){
              if(nums[i]!=val){
                  nums[k]=nums[i];
                  k++;


              }


        }
      return k;
        
    }
};
