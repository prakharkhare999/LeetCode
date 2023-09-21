class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closestsum=100000000;
        sort(nums.begin(),nums.end());
        for(int k=0;k<=n-3;k++){
            int i=k+1;
            int j=n-1;
            while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-closestsum)){
                    closestsum=sum;
                }
                if(sum<target){
                    i++;
                }
                else{
                    j--;
                }

            }

        }
        return closestsum;
    }
};
