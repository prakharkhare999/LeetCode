class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        else{
           return  false;
        }
        
    }
};
//map
 class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m2[t[i]]++;
        }
        for(auto x: m1){
            char ch1=x.first;
            int freq=x.second;
            if(m2.find(ch1)!=m2.end()){
                int freq2=m2[ch1];
                if(freq!=freq2) return false;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
