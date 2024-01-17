//c++
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //but a another solution exist
        unordered_map<int,int>mp;
        unordered_set<int>set;
        for(auto &i:arr){
            mp[i]++;

        }

        for(auto &it:mp){
            int fre=it.second;
            if(set.find(fre)!=set.end()){
                return false;

            }
set.insert(fre);
        }

return true;

        
    }
};
