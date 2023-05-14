class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) i++; // skip non-alphanumeric characters
            while (i < j && !isalnum(s[j])) j--; // skip non-alphanumeric characters
            if (tolower(s[i]) != tolower(s[j])) return false; // compare lowercase characters
            i++;
            j--;
        }
        return true;
    }
};
