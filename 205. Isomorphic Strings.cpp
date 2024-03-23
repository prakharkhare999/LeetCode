class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        int istcharmapped[256]={0};
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && istcharmapped[t[i]]==0){
                hash[s[i]]=t[i];
                istcharmapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]])!=t[i]){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length()) {
            return false;
        }

        // Create an unordered_map to store character mappings
        std::unordered_map<char, char> charMappingMap;

        for (int i = 0; i < s.length(); i++) {
            char original = s[i];
            char replacement = t[i];

            if (charMappingMap.find(original) == charMappingMap.end()) {
                // If original character not in map, check if replacement is already mapped
                auto it = charMappingMap.begin();
                while (it != charMappingMap.end()) {
                    if (it->second == replacement) {
                        return false; // Replacement character already mapped to another original character
                    }
                    it++;
                }
                // If replacement is not already mapped, add the mapping
                charMappingMap[original] = replacement;
            } else {
                // If original character is already in map, check if its mapping matches the current replacement
                if (charMappingMap[original] != replacement) {
                    return false; // Mismatch in mapping
                }
            }
        }

        return true;
    
    }
};
