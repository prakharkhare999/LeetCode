class Solution {
public:
    int minOperations(vector<int>& nums) {
         unordered_map<int,int>mp;
         for(auto &i:nums){
             mp[i]++;
         }
         int cnt=0;
         for(auto &i:mp){
             if(i.second==1){
                 return -1;
             }
             cnt+=ceil((double)i.second/3);
             
         }
         return cnt;
    }
};
