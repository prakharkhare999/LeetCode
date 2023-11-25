class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        /*   TLE
        self implimented
        vector<int>ans;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int temp=abs(nums[i]-nums[j]);
                sum=sum+temp;

            }
            ans.push_back(sum);
            sum=0;
        }
        return ans;
        */

        int n = nums.size();
        
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        
        for(int i = 1; i<n; i++) {
            prefixSum[i] = nums[i] + prefixSum[i-1];
        }
        
        vector<int> result(n);
        
        for(int i = 0; i < n; i++) {
            int leftSum   = prefixSum[i] - nums[i];
            int rightSum  = prefixSum[n-1] - prefixSum[i];
            
            int leftCount  = i;
            int rightCount = n-i-1;
            
            int leftTotal  = (leftCount * nums[i]) - leftSum;
            int rightTotal = rightSum - (nums[i]*rightCount);
            
            result[i] = leftTotal + rightTotal;
        }
        
        return result;
        
    }
};

    
