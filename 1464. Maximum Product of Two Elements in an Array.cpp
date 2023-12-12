class Solution {
public:
    int maxProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int i=0;
int j=1;
int maxi=0;
while(j<nums.size()){
int temp=(nums[i]-1)*(nums[j]-1);
maxi=max(temp,maxi);
i++;
j++;
}
return maxi;
    }
};
