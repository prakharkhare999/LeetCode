class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char, int> m;
        for(int i = 0; i < s.length(); i++)
            m[s[i]]++;
        for(int i = 0; i < s.length(); i++) {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }

        
    
};



//diff
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            arr[ch-'a']++;
        }
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(arr[ch-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
