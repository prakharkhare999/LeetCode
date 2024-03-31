 class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> charToIndex;
        unordered_map<string, int> wordToIndex;
        
        stringstream ss(s);
        string token;
        int countTokens = 0;
        int i = 0; 
        int n = pattern.size();
        
        while(ss >> token) {
            countTokens++;
            
            if (i == n || charToIndex[pattern[i]] != wordToIndex[token])
                return false;
            
            charToIndex[pattern[i]] = wordToIndex[token] = i+1; 
            /*
                Why i+1 ?
                Because by default, if the key is not in map, it's value is returned as 0
                Dry-run this :
                "abba"
                "dog cat cat fish"

            */
            
            i++;
        }
        
        if(countTokens != pattern.size() || i != n)
            return false;
        
        return true;
    }
};
