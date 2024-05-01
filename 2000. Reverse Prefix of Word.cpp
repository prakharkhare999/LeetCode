 class Solution {
public:
    bool check(string word, char ch) {
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == ch) {
                return true;
            }
        }
        return false;
    }

    string reversePrefix(string word, char ch) {
        if(!check(word, ch)) {
            return word;
        }

        int temp = INT_MIN;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == ch) {
                temp = i;
                // first time occour
                break;
            }
        }

        int i = 0;
        while(i <= temp) {
            swap(word[i], word[temp]);
            i++;
            temp--;
        }

        return word;
    }
};
