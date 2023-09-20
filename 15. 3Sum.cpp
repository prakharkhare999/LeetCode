class Solution {
public:
vector<vector<int>>result;
void twosum(vector<int>&num,int target,int i,int j){
    while(i<j){
        if(num[i]+num[j]>target){
            j--;
        }
        else if(num[i]+num[j]<target){
            i++;
        }
        else{
            //first remove dulplicates
            while(i<j && num[i]==num[i+1]) i++;

            while(i<j && num[j]==num[j-1])j--;

            result.push_back({-target,num[i],num[j]});
            i++;
            j--;

        }
    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        //points
        //do like two sum nu2+n3=-n1
        //sort
        //avoid duplicates
        int n=nums.size();
        if(n<3){
            return {};
        }
        sort(nums.begin(),nums.end());

        //fixing on element
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int n1=nums[i];
            int target=-n1;
            twosum(nums,target,i+1,n-1);//it will find n1 and n3:{n1,n2,n3}

        }
        return result;



    }
};
