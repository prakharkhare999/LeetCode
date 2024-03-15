class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) i++; // skip non-alphanumeric characters
            while (i < j && !isalnum(s[j])) j--; // skip non-alphanumeric characters
            if (tolower(s[i]) != tolower(s[j])) return false; // compare lowercase characters
            i++;
            j--;
        }
        return true;
    }
};
//another way


 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> v;
    sort(nums.begin(),nums.end());
   
    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1])   continue;
         int j=i+1, k=nums.size()-1;
       
        while(j<k){
       
        if(nums[i]+nums[j]+nums[k]==0)
        {
           v.push_back({nums[i],nums[j],nums[k]});
           
           
            int val1=nums[j];
            while(j<k && nums[j]==val1) j++;
               
           
             int val2=nums[k];
            while(j<k && nums[k]==val2) k--;
               
        }
       


            else if(nums[i]+nums[j]+nums[k]<0)  j++;
           
            else if(nums[i]+nums[j]+nums[k]>0)  k--;
             
    }
    }
   
   
    return v;


       
    }
};
 

