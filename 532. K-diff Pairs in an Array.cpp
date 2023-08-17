class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //first is brute force 
        // for{
        //     for{
        //         if(abs(num[i]-nums[j])==k)
        //         return
        //     }
        // }



        //seconf two pointer approach
        // sort(nums.begin(),nums.end());
        // int i=0,j=1;
        //set<pair<int,int>>s;
        // while(j<nums.size()){
        //     int diff=nums[j]-nums[i];
        //     if(diff==k){
            //s.insert({nums[i],nums[j]});
        //         i++;
        //         j++;

        //     }
        //     else if(diff>k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //if(i==j) j++
        // }
        // return ans.size();



        //binary search
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            if(binarySearch(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }

        }
        return ans.size();






    }
     int binarySearch(vector<int>&arr,int l, int x)
    {
       int  r = arr.size()- 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
 
            // Check if x is present at mid
            if (arr[m] == x)
                return m;
 
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
 
            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
 
        // If we reach here, then element was
        // not present
        return -1;
    }
};
