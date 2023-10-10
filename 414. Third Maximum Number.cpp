class Solution {
public:
    int thirdMax(vector<int>& nums) {

        //self implimented
        set<int>s;
        vector<int>v;
           


        for(auto &i:nums){
            s.insert(i);
        }

        for (auto& it : s) {
        v.push_back(it);
        }

  sort(v.begin(),v.end());
        int n=v.size();

        if(n==2){
            return v[n-1];
        }
        else if(n==1){
            return v[0];
        }
        return v[n-3];
    }
    
};
