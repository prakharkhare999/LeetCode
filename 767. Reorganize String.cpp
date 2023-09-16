class Solution {
public:
    string reorganizeString(string s) {
         int n = s.size();
    unordered_map<char, int> charCount;
    vector<pair<int, char>> charFreq;

    // Count the frequency of each character in the string
    for (char c : s) {
        charCount[c]++;
    }

    // Create a vector of pairs to store the frequency and character
    for (auto entry : charCount) {
        charFreq.push_back({entry.second, entry.first});
    }

    // Sort the characters by frequency in decreasing order
    sort(charFreq.begin(), charFreq.end(), greater<pair<int, char>>());

    // Check if it's possible to rearrange the string
    if (charFreq[0].first > (n + 1) / 2) {
        return "";
    }

    // Create a result string
    string result(n, ' ');

    // Fill the result string with characters
    int idx = 0;
    for (auto entry : charFreq) {
        char c = entry.second;
        int count = entry.first;
        while (count--) {
            if (idx >= n) {
                idx = 1; // Start from the second position
            }
            result[idx] = c;
            idx += 2; // Move two positions ahead
        }
    }

    return result;
    }
};
