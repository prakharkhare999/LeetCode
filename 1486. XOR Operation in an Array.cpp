
class Solution {
public:
    int xorOperation(int n, int start) {
        //self implimented
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^nums[i];

        }
        return ans;
    }
};
