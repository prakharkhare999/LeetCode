class Solution {
public:
    void sortColors(vector<int>& nums) {
       // this solution is not working because sort function is not allowed in question
      //  sort(nums.begin(),nums.end());
    
      
      //this is optimal 
      //this is called three pointer approach
      int l,m,h; 
       l=0;
       m=0;
       h=nums.size()-1;
       while(m<=h){
           if(nums[m]==0){
               swap(nums[m],nums[l]);
               l++;
               m++;
           }
           else if(nums[m]==1){
               m++;
           }
           else {
               swap(nums[m],nums[h]);
               h--;
           }
       }
    }
};
