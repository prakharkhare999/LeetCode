class Solution {
public:
    int missingNumber(vector<int>& nums) {

//strive yt->take u forward
//another way is xor
int n=nums.size();

//phle natural number ka total sum nikal liya
int sum=(n*(n+1))/2;

//fir array wale number ka sum
int sum2=0;
 for(int i=0;i<n;i++){
     sum2=sum2+nums[i];


 }  
 //1 to n range wale ke sum - array ke elements ka sum

 int p=sum-sum2;
 return p;
        
    }
};
