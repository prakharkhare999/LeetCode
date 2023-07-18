class Solution {
public:
    int singleNumber(vector<int>& nums) {
//we have another way is xor 

        if(nums.size()==1){
            return nums[0];
        }
        set<int>s;
        for(int i=0;i<nums.size();i++){
            
            if(s.count(nums[i])){
                s.erase(nums[i]);
            }
            else{
                s.insert(nums[i]);
            }

        }
        return *(s.begin());
       
        
    }
};
