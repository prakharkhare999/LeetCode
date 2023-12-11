 class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>map;
        int n=arr.size();
        int freq=n/4;
        for(auto &i:arr){
            map[i]++;
            
        }
        for( auto &temp:map){
            if(temp.second>freq){
                return temp.first;
            }
        }

       return -1;
    }
};
